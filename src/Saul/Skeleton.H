/* File generated by the BNF Converter (bnfc 2.9.4.1). */

#ifndef SAUL_SKELETON_HEADER
#define SAUL_SKELETON_HEADER
/* You might want to change the above name. */

#include "Absyn.H"

namespace Saul
{
class Skeleton : public Visitor
{
public:
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
