## File generated by the BNF Converter (bnfc 2.9.4.1).

CC=g++ -g
CCFLAGS=--ansi -W -Wall -Wsign-conversion -Wno-unused-parameter -Wno-unused-function -Wno-unneeded-internal-declaration

FLEX=flex
FLEX_OPTS=-Psaul_

BISON=bison
BISON_OPTS=-t -psaul_

OBJS=Absyn.o Buffer.o Lexer.o Parser.o Printer.o

.PHONY : clean distclean

all : TestSaul

clean :
	rm -f *.o TestSaul Saul.aux Saul.log Saul.pdf Saul.dvi Saul.ps Saul

distclean : clean
	rm -f Absyn.C Absyn.H Buffer.C Buffer.H Test.C Bison.H Parser.C Parser.H ParserError.H Saul.y Lexer.C Saul.l Skeleton.C Skeleton.H Printer.C Printer.H Makefile Saul.tex

TestSaul : ${OBJS} Test.o
	@echo "Linking TestSaul..."
	${CC} ${OBJS} Test.o -o TestSaul

Absyn.o : Absyn.C Absyn.H
	${CC} ${CCFLAGS} -c Absyn.C

Buffer.o : Buffer.C Buffer.H
	${CC} ${CCFLAGS} -c Buffer.C

Lexer.C : Saul.l
	${FLEX} ${FLEX_OPTS} -oLexer.C Saul.l

Parser.C Bison.H : Saul.y
	${BISON} ${BISON_OPTS} Saul.y -o Parser.C

Lexer.o : CCFLAGS+=-Wno-sign-conversion

Lexer.o : Lexer.C Bison.H
	${CC} ${CCFLAGS} -c Lexer.C

Parser.o : Parser.C Absyn.H Bison.H
	${CC} ${CCFLAGS} -c Parser.C

Printer.o : Printer.C Printer.H Absyn.H
	${CC} ${CCFLAGS} -c Printer.C

Skeleton.o : Skeleton.C Skeleton.H Absyn.H
	${CC} ${CCFLAGS} -Wno-unused-parameter -c Skeleton.C

Test.o : Test.C Parser.H Printer.H Absyn.H
	${CC} ${CCFLAGS} -c Test.C
