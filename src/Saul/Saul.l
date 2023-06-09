/* -*- c++ -*- File generated by the BNF Converter (bnfc 2.9.4.1). */

/* Lexer definition for use with FLex */

%option noyywrap noinput nounput
%option reentrant bison-bridge bison-locations

%option prefix="Saul"
%{
#include "Absyn.H"
#include "Bison.H"

#define initialize_lexer Saul_initialize_lexer

static void update_loc(YYLTYPE* loc, char* text)
{
  loc->first_line = loc->last_line;
  loc->first_column = loc->last_column;
  int i = 0;
  for (; text[i] != '\0'; ++i) {
      if (text[i] == '\n') {
          ++loc->last_line;
          loc->last_column = 0;
      } else {
          ++loc->last_column;
      }
  }
}
#define YY_USER_ACTION update_loc(yylloc, yytext);

%}

LETTER [a-zA-Z]
CAPITAL [A-Z]
SMALL [a-z]
DIGIT [0-9]
IDENT [a-zA-Z0-9'_]
%START CHAR CHARESC CHAREND STRING ESCAPED COMMENT

%%  /* Rules. */

<INITIAL>","      	 return _COMMA;
<INITIAL>";"      	 return _SEMI;
<INITIAL>"("      	 return _LPAREN;
<INITIAL>")"      	 return _RPAREN;
<INITIAL>"{"      	 return _LBRACE;
<INITIAL>"}"      	 return _RBRACE;
<INITIAL>":"      	 return _COLON;
<INITIAL>"->"      	 return _RARROW;
<INITIAL>"=>"      	 return _RDARROW;
<INITIAL>"|"      	 return _BAR;
<INITIAL>"="      	 return _EQ;
<INITIAL>":="      	 return _COLONEQ;
<INITIAL>"<"      	 return _LT;
<INITIAL>"<="      	 return _LDARROW;
<INITIAL>">"      	 return _GT;
<INITIAL>">="      	 return _GTEQ;
<INITIAL>"=="      	 return _DEQ;
<INITIAL>"!="      	 return _BANGEQ;
<INITIAL>"+"      	 return _PLUS;
<INITIAL>"-"      	 return _MINUS;
<INITIAL>"*"      	 return _STAR;
<INITIAL>"/"      	 return _SLASH;
<INITIAL>"."      	 return _DOT;
<INITIAL>"panic!"      	 return _SYMB_23;
<INITIAL>"Nat::pred"      	 return _SYMB_24;
<INITIAL>"Nat::iszero"      	 return _SYMB_25;
<INITIAL>"Nat::rec"      	 return _SYMB_26;
<INITIAL>"&"      	 return _AMP;
<INITIAL>"Bool"      	 return _KW_Bool;
<INITIAL>"Bot"      	 return _KW_Bot;
<INITIAL>"Nat"      	 return _KW_Nat;
<INITIAL>"Top"      	 return _KW_Top;
<INITIAL>"Unit"      	 return _KW_Unit;
<INITIAL>"and"      	 return _KW_and;
<INITIAL>"core"      	 return _KW_core;
<INITIAL>"else"      	 return _KW_else;
<INITIAL>"false"      	 return _KW_false;
<INITIAL>"fn"      	 return _KW_fn;
<INITIAL>"if"      	 return _KW_if;
<INITIAL>"inl"      	 return _KW_inl;
<INITIAL>"inline"      	 return _KW_inline;
<INITIAL>"inr"      	 return _KW_inr;
<INITIAL>"language"      	 return _KW_language;
<INITIAL>"match"      	 return _KW_match;
<INITIAL>"new"      	 return _KW_new;
<INITIAL>"not"      	 return _KW_not;
<INITIAL>"or"      	 return _KW_or;
<INITIAL>"return"      	 return _KW_return;
<INITIAL>"succ"      	 return _KW_succ;
<INITIAL>"then"      	 return _KW_then;
<INITIAL>"true"      	 return _KW_true;
<INITIAL>"unit"      	 return _KW_unit;

<INITIAL>"//"[^\n]* /* skip */; /* BNFC: comment "//" */
<INITIAL>"/*" BEGIN COMMENT;
<COMMENT>"*/" BEGIN INITIAL;
<COMMENT>.    /* skip */;
<COMMENT>[\n] /* skip */;

<INITIAL>(\_|{LETTER})(\!|\-|\:|\?|\_|({DIGIT}|{LETTER}))*    	 yylval->_string = strdup(yytext); return T_SaulIdent;
<INITIAL>{DIGIT}+      	 yylval->_int = atoi(yytext); return _INTEGER_;
<INITIAL>[ \t\r\n\f]      	 /* ignore white space. */;
<INITIAL>.      	 return _ERROR_;

%%  /* Initialization code. */

yyscan_t initialize_lexer(FILE *inp)
{
  yyscan_t scanner;
  if (yylex_init_extra(NULL, &scanner)) return 0;
  if (inp) yyrestart(inp, scanner);
  return scanner;
}

