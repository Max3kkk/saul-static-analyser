#ifndef SAUL_VISITTYPECHECK_HEADER
#define SAUL_VISITTYPECHECK_HEADER

#include "Saul/Absyn.H"
#include "Saul/Printer.H"
#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>
#include <stack>

namespace Saul
{
  class VariableDescriptions
  {
  public:
    std::string name = "";
    bool overshadows;
    Type *type = nullptr;

    VariableDescriptions() : name(""), type(nullptr) { this->overshadows = -1; };

    VariableDescriptions(std::string name, Type *type, int overshadows) : name(name), type(type), overshadows(overshadows){};

    void operator=(VariableDescriptions *C)
    {
      this->type = C->type;
      this->name = C->name;
      this->overshadows = C->overshadows;
    };
  };

  class VisitTypeCheck : public Visitor
  {
  private:
    std::unordered_map<std::string, VariableDescriptions> declearedVariables;
    std::vector<Type *> returnTypesList;
    Type *lastReturn = nullptr;
    Type *inType = nullptr;
    PrintAbsyn *printer = new PrintAbsyn();
    ShowAbsyn *showner = new ShowAbsyn();

    void addVariableDecl(std::string name_, Type *type, int overshadows)
    {
      if (overshadows == 0 && this->declearedVariables.count(name_) != 0)
      {
        std::cout << "Error: variable or function with such name already exist" << std::endl;
        std::cout << "Name: " << name_ << std::endl;
        exit(1);
      }
      PrintAbsyn *printer = new PrintAbsyn();
      auto varDecl = new VariableDescriptions(name_, type, overshadows);

      this->declearedVariables[name_] = varDecl;
    };

    Type *getLastReturn()
    {
      Type *lastReturnCopy = this->lastReturn;
      this->lastReturn = nullptr;

      return lastReturnCopy;
    };

    void setLastReturn(Type *lastReturn_)
    {
      this->lastReturn = lastReturn_;
    };

    std::vector<Type *> getReturnTypesList()
    {
      std::vector<Type *> returnTypesListCopy = this->returnTypesList;
      this->returnTypesList.clear();

      return returnTypesListCopy;
    };

    void setReturnTypesList(std::vector<Type *> returnTypesList_)
    {
      this->returnTypesList = returnTypesList_;
    };

    Type *getInType()
    {
      return this->inType;
    };

    void removeInType()
    {
      this->inType = nullptr;
    };

    void setInType(Type *inType_)
    {
      this->inType = inType_;
    };

  public:
    void printDeclVars();
    void ifDefined(std::string ID, int line_number);
    void visitProgram(Program *p);
    void visitLanguageDecl(LanguageDecl *p);
    void visitDecl(Decl *p);
    void visitLocalDecl(LocalDecl *p);
    void visitAnnotation(Annotation *p);
    void visitParamDecl(ParamDecl *p);
    void visitReturnType(ReturnType *p);
    void visitType(Type *p);
    void visitMatchCase(MatchCase *p);
    void visitPattern(Pattern *p);
    void visitLabelledPattern(LabelledPattern *p);
    void visitBinding(Binding *p);
    void visitExpr(Expr *p);
    void visitRecordFieldType(RecordFieldType *p);
    void visitAProgram(AProgram *p);
    void visitLanguageCore(LanguageCore *p);
    void visitDeclFun(DeclFun *p);
    void visitALocalDecl(ALocalDecl *p);
    void visitInlineAnnotation(InlineAnnotation *p);
    void visitAParamDecl(AParamDecl *p);
    void visitNoReturnType(NoReturnType *p);
    void visitSomeReturnType(SomeReturnType *p);
    void visitAMatchCase(AMatchCase *p);
    void visitPatternInl(PatternInl *p);
    void visitPatternInr(PatternInr *p);
    void visitPatternTuple(PatternTuple *p);
    void visitPatternRecord(PatternRecord *p);
    void visitPatternFalse(PatternFalse *p);
    void visitPatternTrue(PatternTrue *p);
    void visitPatternUnit(PatternUnit *p);
    void visitPatternInt(PatternInt *p);
    void visitPatternSucc(PatternSucc *p);
    void visitPatternVar(PatternVar *p);
    void visitALabelledPattern(ALabelledPattern *p);
    void visitABinding(ABinding *p);
    void visitSequence(Sequence *p);
    void visitAssign(Assign *p);
    void visitIf(If *p);
    void visitLessThan(LessThan *p);
    void visitLessThanOrEqual(LessThanOrEqual *p);
    void visitGreaterThan(GreaterThan *p);
    void visitGreaterThanOrEqual(GreaterThanOrEqual *p);
    void visitEqual(Equal *p);
    void visitNotEqual(NotEqual *p);
    void visitAbstraction(Abstraction *p);
    void visitMatch(Match *p);
    void visitAdd(Add *p);
    void visitSubtract(Subtract *p);
    void visitLogicOr(LogicOr *p);
    void visitMultiply(Multiply *p);
    void visitDivide(Divide *p);
    void visitLogicAnd(LogicAnd *p);
    void visitRef(Ref *p);
    void visitDeref(Deref *p);
    void visitApplication(Application *p);
    void visitDotRecord(DotRecord *p);
    void visitDotTuple(DotTuple *p);
    void visitTuple(Tuple *p);
    void visitRecord(Record *p);
    void visitPanic(Panic *p);
    void visitInl(Inl *p);
    void visitInr(Inr *p);
    void visitSucc(Succ *p);
    void visitLogicNot(LogicNot *p);
    void visitPred(Pred *p);
    void visitIsZero(IsZero *p);
    void visitNatRec(NatRec *p);
    void visitConstTrue(ConstTrue *p);
    void visitConstFalse(ConstFalse *p);
    void visitConstUnit(ConstUnit *p);
    void visitConstInt(ConstInt *p);
    void visitVar(Var *p);
    void visitTypeFun(TypeFun *p);
    void visitTypeSum(TypeSum *p);
    void visitTypeTuple(TypeTuple *p);
    void visitTypeRecord(TypeRecord *p);
    void visitTypeBool(TypeBool *p);
    void visitTypeNat(TypeNat *p);
    void visitTypeUnit(TypeUnit *p);
    void visitTypeTop(TypeTop *p);
    void visitTypeBottom(TypeBottom *p);
    void visitTypeRef(TypeRef *p);
    void visitTypeVar(TypeVar *p);
    void visitARecordFieldType(ARecordFieldType *p);
    void visitListSaulIdent(ListSaulIdent *p);
    void visitListDecl(ListDecl *p);
    void visitListLocalDecl(ListLocalDecl *p);
    void visitListAnnotation(ListAnnotation *p);
    void visitListParamDecl(ListParamDecl *p);
    void visitListType(ListType *p);
    void visitListMatchCase(ListMatchCase *p);
    void visitListPattern(ListPattern *p);
    void visitListLabelledPattern(ListLabelledPattern *p);
    void visitListBinding(ListBinding *p);
    void visitListExpr(ListExpr *p);
    void visitListRecordFieldType(ListRecordFieldType *p);

    void visitInteger(Integer x);
    void visitChar(Char x);
    void visitDouble(Double x);
    void visitString(String x);
    void visitIdent(Ident x);
    void visitSaulIdent(SaulIdent x);
  };
}

#endif
