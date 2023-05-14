/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_SAUL_BISON_H_INCLUDED
# define YY_SAUL_BISON_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int Sauldebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    _ERROR_ = 258,                 /* _ERROR_  */
    _BANGEQ = 259,                 /* _BANGEQ  */
    _AMP = 260,                    /* _AMP  */
    _LPAREN = 261,                 /* _LPAREN  */
    _RPAREN = 262,                 /* _RPAREN  */
    _STAR = 263,                   /* _STAR  */
    _PLUS = 264,                   /* _PLUS  */
    _COMMA = 265,                  /* _COMMA  */
    _MINUS = 266,                  /* _MINUS  */
    _RARROW = 267,                 /* _RARROW  */
    _DOT = 268,                    /* _DOT  */
    _SLASH = 269,                  /* _SLASH  */
    _COLON = 270,                  /* _COLON  */
    _COLONEQ = 271,                /* _COLONEQ  */
    _SEMI = 272,                   /* _SEMI  */
    _LT = 273,                     /* _LT  */
    _LDARROW = 274,                /* _LDARROW  */
    _EQ = 275,                     /* _EQ  */
    _DEQ = 276,                    /* _DEQ  */
    _RDARROW = 277,                /* _RDARROW  */
    _GT = 278,                     /* _GT  */
    _GTEQ = 279,                   /* _GTEQ  */
    _KW_Bool = 280,                /* _KW_Bool  */
    _KW_Bot = 281,                 /* _KW_Bot  */
    _KW_Nat = 282,                 /* _KW_Nat  */
    _SYMB_25 = 283,                /* _SYMB_25  */
    _SYMB_24 = 284,                /* _SYMB_24  */
    _SYMB_26 = 285,                /* _SYMB_26  */
    _KW_Top = 286,                 /* _KW_Top  */
    _KW_Unit = 287,                /* _KW_Unit  */
    _KW_and = 288,                 /* _KW_and  */
    _KW_core = 289,                /* _KW_core  */
    _KW_else = 290,                /* _KW_else  */
    _KW_false = 291,               /* _KW_false  */
    _KW_fn = 292,                  /* _KW_fn  */
    _KW_if = 293,                  /* _KW_if  */
    _KW_inl = 294,                 /* _KW_inl  */
    _KW_inline = 295,              /* _KW_inline  */
    _KW_inr = 296,                 /* _KW_inr  */
    _KW_language = 297,            /* _KW_language  */
    _KW_match = 298,               /* _KW_match  */
    _KW_new = 299,                 /* _KW_new  */
    _KW_not = 300,                 /* _KW_not  */
    _KW_or = 301,                  /* _KW_or  */
    _SYMB_23 = 302,                /* _SYMB_23  */
    _KW_return = 303,              /* _KW_return  */
    _KW_succ = 304,                /* _KW_succ  */
    _KW_then = 305,                /* _KW_then  */
    _KW_true = 306,                /* _KW_true  */
    _KW_unit = 307,                /* _KW_unit  */
    _LBRACE = 308,                 /* _LBRACE  */
    _BAR = 309,                    /* _BAR  */
    _RBRACE = 310,                 /* _RBRACE  */
    T_SaulIdent = 311,             /* T_SaulIdent  */
    _INTEGER_ = 312                /* _INTEGER_  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 52 "Saul.y"

  int    _int;
  char   _char;
  double _double;
  char*  _string;
  Saul::Program* program_;
  Saul::ListSaulIdent* listsaulident_;
  Saul::LanguageDecl* languagedecl_;
  Saul::Decl* decl_;
  Saul::ListDecl* listdecl_;
  Saul::LocalDecl* localdecl_;
  Saul::ListLocalDecl* listlocaldecl_;
  Saul::Annotation* annotation_;
  Saul::ListAnnotation* listannotation_;
  Saul::ParamDecl* paramdecl_;
  Saul::ListParamDecl* listparamdecl_;
  Saul::ReturnType* returntype_;
  Saul::Type* type_;
  Saul::ListType* listtype_;
  Saul::MatchCase* matchcase_;
  Saul::ListMatchCase* listmatchcase_;
  Saul::Pattern* pattern_;
  Saul::ListPattern* listpattern_;
  Saul::LabelledPattern* labelledpattern_;
  Saul::ListLabelledPattern* listlabelledpattern_;
  Saul::Binding* binding_;
  Saul::ListBinding* listbinding_;
  Saul::Expr* expr_;
  Saul::ListExpr* listexpr_;
  Saul::RecordFieldType* recordfieldtype_;
  Saul::ListRecordFieldType* listrecordfieldtype_;

#line 154 "Bison.H"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif




int Saulparse (yyscan_t scanner, YYSTYPE *result);


#endif /* !YY_SAUL_BISON_H_INCLUDED  */
