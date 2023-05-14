```
LanguageCore ::= "language" "core" ";"

Decl ::= [Annotation] "fn" SaulIdent "(" [ParamDecl] ")" ReturnType "{" [Decl] "return" Expr "}"
Annotation ::= "inline"
ParamDecl ::= SaulIdent ":" Type
ReturnType ::= | "->" Type
Type ::= Type9
Type9 ::= Type "," Type9 | Type
MatchCase ::= Pattern "=>" Expr
Pattern ::= "inl" "(" Pattern ")" 
           | "inr" "(" Pattern ")" 
           | "{" [Pattern] "}" 
           | "{" [LabelledPattern] "}" 
           | "false" 
           | "true" 
           | "unit" 
           | Integer 
           | "succ" "(" Pattern ")" 
           | SaulIdent 
           | "(" Pattern ")"
LabelledPattern ::= SaulIdent "=" Pattern

Expr ::= Expr ";" Expr 
        | Expr ";" 
        | Expr1
Expr1 ::= Expr2 ":=" Expr1 
          | "if" Expr1 "then" Expr1 "else" Expr1 
          | Expr2
Expr2 ::= Expr3 ("<" | "<=" | ">" | ">=" | "==" | "!=") Expr3
Expr3 ::= "fn" "(" [ParamDecl] ")" "{" "return" Expr "}" 
          | "match" Expr2 "{" [MatchCase] "}" 
          | Expr3 ("+" | "-") Expr4 
          | Expr4
Expr4 ::= Expr4 ("*" | "/") Expr5 
          | Expr5
Expr5 ::= "new" "(" Expr5 ")" 
          | "*" Expr5 
          | Expr6
Expr6 ::= Expr6 "(" [Expr] ")" 
          | Expr6 "." SaulIdent 
          | Expr6 "." Integer 
          | "{" [Expr] "}" 
          | "{" [Binding] "}" 
          | "panic!" 
          | "inl" "(" Expr ")" 
          | "inr" "(" Expr ")" 
          | "succ" "(" Expr ")" 
          | "not" "(" Expr ")" 
          | "Nat::pred" "(" Expr ")" 
          | "Nat::iszero" "(" Expr ")" 
          | "Nat::rec" "(" Expr "," Expr "," Expr ")" 
          | "true" 
          | "false" 
          | "unit" 
          | Integer 
          | SaulIdent

Binding ::= SaulIdent "=" Expr
ParamDecl ::= SaulIdent ":" Type
Type ::= Type1
Type1 ::= Type2 "+" Type2
Type2 ::= "{" [Type] "}" 
          | "{" [RecordFieldType] "}" 
          | "Bool" 
          | "Nat" 
          | "Unit" 
          | "Top" 
          | "Bot" 
          | "&" Type2 
          | SaulIdent
RecordFieldType ::= SaulIdent ":" Type
```
