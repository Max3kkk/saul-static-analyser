#include <iostream>

#include "TypeCheck.h"
#include "Saul/Absyn.H"
#include "Saul/Printer.H"
#include "Saul/Absyn.H"
#include "Saul/Parser.H"
#include "Saul/ParserError.H"
#include "Saul/Printer.H"

void usage() {
  printf("usage: Call with one of the following argument combinations:\n");
  printf("\t(no arguments)\tTypecheck stdin.\n");
  printf("\tPROGRAM\t\tParse content of file as Saul program, then call main with input parsed from stdin.\n");
}

enum MODE { TYPECHECK, INTERPRET } ;

int main(int argc, char ** argv)
{
  FILE *input;
  int quiet = 0;
  char *filename = NULL;

  MODE mode = TYPECHECK;

  if (argc > 1) {
    if (strcmp(argv[1], "typecheck") == 0) {
      if (argc > 2) {
        filename = argv[2];
      } else {
        usage();
        exit(1);
      }
    } else if (strcmp(argv[1], "interpret") == 0) {
      mode = INTERPRET;
      if (argc > 2) {
        filename = argv[2];
      } else {
        usage();
        exit(1);
      }
    } else {
      mode = INTERPRET;
      filename = argv[1];
    }
  }

  if (filename) {
    input = fopen(filename, "r");
    if (!input) {
      printf("cannot read file: %s\n", filename);
      exit(1);
    }
  } else {
    input = stdin;
  }

  Saul::Program *prog = nullptr;
  try {
    prog = Saul::pProgram(input);
    std::cout << "parsing succeeded!\n" ;
    if (prog) { std::cout << "prog is not null\n" ;}
  }
  catch (Saul::parse_error &ex) {
    std::cerr << "Parse error on line " << ex.getLine() << "\n";
  }
  if (filename)
    fclose(input);

  if (prog) {
    Saul::typecheckProgram(prog);
  }

  return 0;
}
