#pragma once
#include "Saul/Absyn.H"

namespace Saul {

void typecheckProgram(Program *program);

void typecheck(Expr *expr, Type *type);

Type *infer(Expr *expr);

} // namespace Saul
