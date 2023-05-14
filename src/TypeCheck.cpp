#include <iostream>
#include "TypeCheck.h"
#include "VisitTypeCheck.h"
#include "Saul/Absyn.H"

namespace Saul
{

  void typecheckProgram(Program *program)
  {
    program->accept(new VisitTypeCheck());
  }

} // namespace Saul
