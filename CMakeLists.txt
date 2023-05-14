cmake_minimum_required(VERSION 3.19.0)
project(saul-typechecker VERSION 0.1.0)

set (Saul_Syntax
  src/Saul/Absyn.H
  src/Saul/Absyn.C
  src/Saul/Parser.H
  src/Saul/Parser.C
  src/Saul/ParserError.H
  src/Saul/Printer.H
  src/Saul/Printer.C
  src/Saul/Buffer.H
  src/Saul/Buffer.C
  src/Saul/Bison.H
  src/Saul/Lexer.C
)

set (SRCS
  src/main.cpp
  src/TypeCheck.h
  src/TypeCheck.cpp
  src/VisitTypeCheck.h
  src/VisitTypeCheck.cpp
)

add_executable(saul-typechecker ${Saul_Syntax} ${SRCS})
set_property(TARGET saul-typechecker PROPERTY CXX_STANDARD 17)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

include(CTest)

add_test(NAME applying-non-function-1 COMMAND saul-typechecker typecheck ../tests/core/ill-typed/applying-non-function-1.saul)
add_test(NAME applying-non-function-2 COMMAND saul-typechecker typecheck ../tests/core/ill-typed/applying-non-function-2.saul)
add_test(NAME applying-non-function-3 COMMAND saul-typechecker typecheck ../tests/core/ill-typed/applying-non-function-3.saul)
add_test(NAME argument-type-mismatch-1 COMMAND saul-typechecker typecheck ../tests/core/ill-typed/argument-type-mismatch-1.saul)
add_test(NAME argument-type-mismatch-2 COMMAND saul-typechecker typecheck ../tests/core/ill-typed/argument-type-mismatch-2.saul)
add_test(NAME argument-type-mismatch-3 COMMAND saul-typechecker typecheck ../tests/core/ill-typed/argument-type-mismatch-3.saul)
add_test(NAME bad-if-1 COMMAND saul-typechecker typecheck ../tests/core/ill-typed/bad-if-1.saul)
add_test(NAME bad-if-2 COMMAND saul-typechecker typecheck ../tests/core/ill-typed/bad-if-2.saul)
add_test(NAME core-bad-if-3 COMMAND saul-typechecker typecheck ../tests/core/ill-typed/bad-if-3.saul)
add_test(NAME core-bad-if-4 COMMAND saul-typechecker typecheck ../tests/core/ill-typed/bad-if-4.saul)
add_test(NAME bad-succ-1 COMMAND saul-typechecker typecheck ../tests/core/ill-typed/bad-succ-1.saul)
add_test(NAME bad-succ-2 COMMAND saul-typechecker typecheck ../tests/core/ill-typed/bad-succ-2.saul)
add_test(NAME bad-succ-3 COMMAND saul-typechecker typecheck ../tests/core/ill-typed/bad-succ-3.saul)
add_test(NAME shadowed-variable COMMAND saul-typechecker typecheck ../tests/core/ill-typed/shadowed-variable.saul)
add_test(NAME undefined-variable-1 COMMAND saul-typechecker typecheck ../tests/core/ill-typed/undefined-variable-1.saul)
add_test(NAME undefined-variable-2 COMMAND saul-typechecker typecheck ../tests/core/ill-typed/undefined-variable-2.saul)
add_test(NAME bad-squares-1 COMMAND saul-typechecker typecheck ../tests/core/ill-typed/bad-squares-1.saul)
add_test(NAME bad-squares-2 COMMAND saul-typechecker typecheck ../tests/core/ill-typed/bad-squares-2.saul)
add_test(NAME bad-pairs-1 COMMAND saul-typechecker typecheck ../tests/pairs/ill-typed/bad-pairs-1.saul)
add_test(NAME bad-pairs-2 COMMAND saul-typechecker typecheck ../tests/pairs/ill-typed/bad-pairs-2.saul)
add_test(NAME bad-pairs-3 COMMAND saul-typechecker typecheck ../tests/pairs/ill-typed/bad-pairs-3.saul)
add_test(NAME bad-pairs-4 COMMAND saul-typechecker typecheck ../tests/pairs/ill-typed/bad-pairs-4.saul)
add_test(NAME bad-sum-types-1 COMMAND saul-typechecker typecheck ../tests/sum-types/ill-typed/bad-sum-types-1.saul)
add_test(NAME bad-sum-types-2 COMMAND saul-typechecker typecheck ../tests/sum-types/ill-typed/bad-sum-types-2.saul)
add_test(NAME bad-sum-types-3 COMMAND saul-typechecker typecheck ../tests/sum-types/ill-typed/bad-sum-types-3.saul)
add_test(NAME bad-sum-types-4 COMMAND saul-typechecker typecheck ../tests/sum-types/ill-typed/bad-sum-types-4.saul)
add_test(NAME bad-sum-types-5 COMMAND saul-typechecker typecheck ../tests/sum-types/ill-typed/bad-sum-types-5.saul)
add_test(NAME bad-tuples-1 COMMAND saul-typechecker typecheck ../tests/tuples/ill-typed/bad-tuples-1.saul)
add_test(NAME bad-tuples-2 COMMAND saul-typechecker typecheck ../tests/tuples/ill-typed/bad-tuples-2.saul)
add_test(NAME bad-nat-1 COMMAND saul-typechecker typecheck ../tests/complex/ill-typed/bad-nat-1.saul)
add_test(NAME applying-non-function-1_complex COMMAND saul-typechecker typecheck ../tests/complex/ill-typed/applying-non-function-1.saul)
add_test(NAME argument-type-mismatch-2_complex COMMAND saul-typechecker typecheck ../tests/complex/ill-typed/argument-type-mismatch-2.saul)
add_test(NAME bad-succ-3_complex COMMAND saul-typechecker typecheck ../tests/complex/ill-typed/bad-succ-3.saul)
add_test(NAME bad-logic-not COMMAND saul-typechecker typecheck ../tests/complex/ill-typed/bad-logic-not.saul)
add_test(NAME bad-abstraction COMMAND saul-typechecker typecheck ../tests/complex/ill-typed/bad-abstraction.saul)
add_test(NAME bad-factorial-2 COMMAND saul-typechecker typecheck ../tests/complex/ill-typed/bad-factorial-2.saul)
add_test(NAME nat__rec-parameters COMMAND saul-typechecker typecheck ../tests/complex/ill-typed/nat__rec-parameters.saul)
add_test(NAME bad-succ-1_complex COMMAND saul-typechecker typecheck ../tests/complex/ill-typed/bad-succ-1.saul)
add_test(NAME bad-cmp-2 COMMAND saul-typechecker typecheck ../tests/complex/ill-typed/bad-cmp-2.saul)
add_test(NAME applying-non-function-3_complex COMMAND saul-typechecker typecheck ../tests/complex/ill-typed/applying-non-function-3.saul)
add_test(NAME bad-if-1_complex COMMAND saul-typechecker typecheck ../tests/complex/ill-typed/bad-if-1.saul)
add_test(NAME bad-add COMMAND saul-typechecker typecheck ../tests/complex/ill-typed/bad-add.saul)
add_test(NAME my-mismatch COMMAND saul-typechecker typecheck ../tests/complex/ill-typed/my-mismatch.saul)
add_test(NAME bad-nat-rec-1 COMMAND saul-typechecker typecheck ../tests/complex/ill-typed/bad-nat-rec-1.saul)
add_test(NAME undefined-variable-3 COMMAND saul-typechecker typecheck ../tests/complex/ill-typed/undefined-variable-3.saul)
add_test(NAME argument-type-mismatch-4 COMMAND saul-typechecker typecheck ../tests/complex/ill-typed/argument-type-mismatch-4.saul)
add_test(NAME bad-cmp-6 COMMAND saul-typechecker typecheck ../tests/complex/ill-typed/bad-cmp-6.saul)
add_test(NAME bad-iszero COMMAND saul-typechecker typecheck ../tests/complex/ill-typed/bad-iszero.saul)
add_test(NAME bad-function-call COMMAND saul-typechecker typecheck ../tests/complex/ill-typed/bad-function-call.saul)
add_test(NAME bad-cmp-4 COMMAND saul-typechecker typecheck ../tests/complex/ill-typed/bad-cmp-4.saul)
add_test(NAME added-test-1 COMMAND saul-typechecker typecheck ../tests/complex/ill-typed/added-test-1.saul)
add_test(NAME my-ill-test COMMAND saul-typechecker typecheck ../tests/complex/ill-typed/my-ill-test.saul)
add_test(NAME undefined-variable-1_complex COMMAND saul-typechecker typecheck ../tests/complex/ill-typed/undefined-variable-1.saul)
add_test(NAME bad-multiply COMMAND saul-typechecker typecheck ../tests/complex/ill-typed/bad-multiply.saul)
add_test(NAME invalid-not_ COMMAND saul-typechecker typecheck ../tests/complex/ill-typed/invalid-not_.saul)
add_test(NAME my-ill-typed-2 COMMAND saul-typechecker typecheck ../tests/complex/ill-typed/my-ill-typed-2.saul)
add_test(NAME bad-if-and-undefined-variable COMMAND saul-typechecker typecheck ../tests/complex/ill-typed/bad-if-and-undefined-variable.saul)
add_test(NAME bad-if-3 COMMAND saul-typechecker typecheck ../tests/complex/ill-typed/bad-if-3.saul)
add_test(NAME bad-squares-1_complex COMMAND saul-typechecker typecheck ../tests/complex/ill-typed/bad-squares-1.saul)
add_test(NAME bad-succ-2_complex COMMAND saul-typechecker typecheck ../tests/complex/ill-typed/bad-succ-2.saul)
add_test(NAME bad-factorial-1 COMMAND saul-typechecker typecheck ../tests/complex/ill-typed/bad-factorial-1.saul)
add_test(NAME bad-cmp-1 COMMAND saul-typechecker typecheck ../tests/complex/ill-typed/bad-cmp-1.saul)
add_test(NAME argument-type-mismatch-3_complex COMMAND saul-typechecker typecheck ../tests/complex/ill-typed/argument-type-mismatch-3.saul)
add_test(NAME my-factorial COMMAND saul-typechecker typecheck ../tests/complex/ill-typed/my-factorial.saul)
add_test(NAME bad-factorial-3 COMMAND saul-typechecker typecheck ../tests/complex/ill-typed/bad-factorial-3.saul)
add_test(NAME applying-non-function-2_complex COMMAND saul-typechecker typecheck ../tests/complex/ill-typed/applying-non-function-2.saul)
add_test(NAME argument-type-mismatch-1_complex COMMAND saul-typechecker typecheck ../tests/complex/ill-typed/argument-type-mismatch-1.saul)
add_test(NAME bad-cmp-3 COMMAND saul-typechecker typecheck ../tests/complex/ill-typed/bad-cmp-3.saul)
add_test(NAME bad-nat-2 COMMAND saul-typechecker typecheck ../tests/complex/ill-typed/bad-nat-2.saul)
add_test(NAME invalid-nat COMMAND saul-typechecker typecheck ../tests/complex/ill-typed/invalid-nat.saul)
add_test(NAME function-mismatch COMMAND saul-typechecker typecheck ../tests/complex/ill-typed/function-mismatch.saul)
add_test(NAME bad-if-4 COMMAND saul-typechecker typecheck ../tests/complex/ill-typed/bad-if-4.saul)
add_test(NAME bad-higher-order COMMAND saul-typechecker typecheck ../tests/complex/ill-typed/bad-higher-order.saul)
add_test(NAME my-ill-typed-1 COMMAND saul-typechecker typecheck ../tests/complex/ill-typed/my-ill-typed-1.saul)
add_test(NAME undefined-variable-2_complex COMMAND saul-typechecker typecheck ../tests/complex/ill-typed/undefined-variable-2.saul)
add_test(NAME added-test-2 COMMAND saul-typechecker typecheck ../tests/complex/ill-typed/added-test-2.saul)
add_test(NAME bad-squares-2_complex COMMAND saul-typechecker typecheck ../tests/complex/ill-typed/bad-squares-2.saul)
add_test(NAME bad-nat-rec-2 COMMAND saul-typechecker typecheck ../tests/complex/ill-typed/bad-nat-rec-2.saul)
add_test(NAME bad-logic-or COMMAND saul-typechecker typecheck ../tests/complex/ill-typed/bad-logic-or.saul)
add_test(NAME bad-return-type COMMAND saul-typechecker typecheck ../tests/complex/ill-typed/bad-return-type.saul)
add_test(NAME application-param-type COMMAND saul-typechecker typecheck ../tests/complex/ill-typed/application-param-type.saul)
add_test(NAME bad-if-2_complex COMMAND saul-typechecker typecheck ../tests/complex/ill-typed/bad-if-2.saul)
add_test(NAME shadowed-variable-1_complex COMMAND saul-typechecker typecheck ../tests/complex/ill-typed/shadowed-variable-1.saul)
add_test(NAME shadowed-variable-2_complex COMMAND saul-typechecker typecheck ../tests/complex/ill-typed/shadowed-variable-2.saul)
add_test(NAME bad-cmp-5 COMMAND saul-typechecker typecheck ../tests/complex/ill-typed/bad-cmp-5.saul)
add_test(NAME bad-logic-and COMMAND saul-typechecker typecheck ../tests/complex/ill-typed/bad-logic-and.saul)
add_test(NAME bad-records-1 COMMAND saul-typechecker typecheck ../tests/records/ill-typed/bad-records-1.saul)
add_test(NAME bad-records-2 COMMAND saul-typechecker typecheck ../tests/records/ill-typed/bad-records-2.saul)
add_test(NAME bad-refs-1 COMMAND saul-typechecker typecheck ../tests/references/ill-typed/bad-refs-1.saul)
add_test(NAME bad-refs-2 COMMAND saul-typechecker typecheck ../tests/references/ill-typed/bad-refs-2.saul)
add_test(NAME bad-subtyping-1 COMMAND saul-typechecker typecheck ../tests/subtyping/ill-typed/bad-subtyping-1.saul)
add_test(NAME bad-subtyping-2 COMMAND saul-typechecker typecheck ../tests/subtyping/ill-typed/bad-subtyping-2.saul)
add_test(NAME bad-subtyping-3 COMMAND saul-typechecker typecheck ../tests/subtyping/ill-typed/bad-subtyping-3.saul)
add_test(NAME bad-subtyping-4 COMMAND saul-typechecker typecheck ../tests/subtyping/ill-typed/bad-subtyping-4.saul)
add_test(NAME bad-panic COMMAND saul-typechecker typecheck ../tests/exceptions/ill-typed/bad-panic.saul)
add_test(NAME bad-general-recursion COMMAND saul-typechecker typecheck ../tests/recursions/ill-typed/bad-general-recursion.saul)
add_test(NAME bad-structurals COMMAND saul-typechecker typecheck ../tests/structurals/ill-typed/bad-structurals.saul)
add_test(NAME bad_ignore COMMAND saul-typechecker typecheck ../tests/units/ill-typed/bad_ignore.saul)

set_tests_properties(
  bad-nat-1
  applying-non-function-1_complex
  argument-type-mismatch-2_complex
  bad-succ-3_complex
  bad-logic-not
  bad-abstraction
  bad-factorial-2
  nat__rec-parameters
  bad-succ-1_complex
  bad-cmp-2
  applying-non-function-3_complex
  bad-if-1_complex
  bad-add
  my-mismatch
  bad-nat-rec-1
  undefined-variable-3
  argument-type-mismatch-4
  bad-cmp-6
  bad-iszero
  bad-function-call
  bad-cmp-4
  added-test-1
  my-ill-test
  undefined-variable-1_complex
  bad-multiply
  invalid-not_
  my-ill-typed-2
  bad-if-and-undefined-variable
  bad-if-3
  bad-squares-1_complex
  bad-succ-2_complex
  bad-factorial-1
  bad-cmp-1
  argument-type-mismatch-3_complex
  my-factorial
  bad-factorial-3
  applying-non-function-2_complex
  argument-type-mismatch-1_complex
  bad-cmp-3
  bad-nat-2
  invalid-nat
  function-mismatch
  bad-if-4
  bad-higher-order
  my-ill-typed-1
  undefined-variable-2_complex
  added-test-2
  bad-squares-2_complex
  bad-nat-rec-2
  bad-logic-or
  bad-return-type
  application-param-type
  bad-if-2_complex
  shadowed-variable-1_complex
  shadowed-variable-2_complex
  bad-cmp-5
  bad-logic-and
  bad-records-1
  bad-records-2
  bad-refs-1
  bad-refs-2
  bad-subtyping-1
  bad-subtyping-2
  bad-subtyping-3
  bad-subtyping-4
  bad-structurals 
  bad-general-recursion
  bad-panic
  bad_ignore
  bad-squares-1
  bad-squares-2
  applying-non-function-1
  applying-non-function-2
  applying-non-function-3
  argument-type-mismatch-1
  argument-type-mismatch-2
  argument-type-mismatch-3
  bad-if-1
  bad-if-2
  core-bad-if-3
  core-bad-if-4
  bad-succ-1
  bad-succ-2
  bad-succ-3
  shadowed-variable
  undefined-variable-1
  undefined-variable-2
  bad-pairs-1
  bad-pairs-2
  bad-pairs-3
  bad-pairs-4
  bad-sum-types-1
  bad-sum-types-2
  bad-sum-types-3
  bad-sum-types-4
  bad-sum-types-5
  bad-tuples-1
  bad-tuples-2
  PROPERTIES WILL_FAIL TRUE)

add_test(NAME factorial COMMAND saul-typechecker typecheck ../tests/core/well-typed/factorial.saul)
add_test(NAME increment_twice COMMAND saul-typechecker typecheck ../tests/core/well-typed/increment_twice.saul)
add_test(NAME higher-order-1 COMMAND saul-typechecker typecheck ../tests/core/well-typed/higher-order-1.saul)
add_test(NAME logical-operators COMMAND saul-typechecker typecheck ../tests/core/well-typed/logical-operators.saul)
add_test(NAME squares COMMAND saul-typechecker typecheck ../tests/core/well-typed/squares.saul)
add_test(NAME pairs COMMAND saul-typechecker typecheck ../tests/pairs/well-typed/pairs.saul)
add_test(NAME sum-types-1 COMMAND saul-typechecker typecheck ../tests/sum-types/well-typed/sum-types-1.saul)
add_test(NAME sum-types-2 COMMAND saul-typechecker typecheck ../tests/sum-types/well-typed/sum-types-2.saul)
add_test(NAME sum-types-3 COMMAND saul-typechecker typecheck ../tests/sum-types/well-typed/sum-types-3.saul)
add_test(NAME tuples-1 COMMAND saul-typechecker typecheck ../tests/tuples/well-typed/tuples-1.saul)
add_test(NAME tuples-2 COMMAND saul-typechecker typecheck ../tests/tuples/well-typed/tuples-2.saul)
add_test(NAME my-well-typed-2 COMMAND saul-typechecker typecheck ../tests/complex/well-typed/my-well-typed-2.saul)
add_test(NAME inner-if COMMAND saul-typechecker typecheck ../tests/complex/well-typed/inner-if.saul)
add_test(NAME abstract-function COMMAND saul-typechecker typecheck ../tests/complex/well-typed/abstract-function.saul)
add_test(NAME negate COMMAND saul-typechecker typecheck ../tests/complex/well-typed/negate.saul)
add_test(NAME higher-order-2 COMMAND saul-typechecker typecheck ../tests/complex/well-typed/higher-order-2.saul)
add_test(NAME good-if-2 COMMAND saul-typechecker typecheck ../tests/complex/well-typed/good-if-2.saul)
add_test(NAME shadowed-variable_complex COMMAND saul-typechecker typecheck ../tests/complex/well-typed/shadowed-variable.saul)
add_test(NAME good-if-1 COMMAND saul-typechecker typecheck ../tests/complex/well-typed/good-if-1.saul)
add_test(NAME added-test-1_complex COMMAND saul-typechecker typecheck ../tests/complex/well-typed/added-test-1.saul)
add_test(NAME good-succ-2 COMMAND saul-typechecker typecheck ../tests/complex/well-typed/good-succ-2.saul)
add_test(NAME decrement_twice COMMAND saul-typechecker typecheck ../tests/complex/well-typed/decrement_twice.saul)
add_test(NAME nested COMMAND saul-typechecker typecheck ../tests/complex/well-typed/nested.saul)
add_test(NAME applying-actual-function COMMAND saul-typechecker typecheck ../tests/complex/well-typed/applying-actual-function.saul)
add_test(NAME increment_twice_complex COMMAND saul-typechecker typecheck ../tests/complex/well-typed/increment_twice.saul)
add_test(NAME increment-triple COMMAND saul-typechecker typecheck ../tests/complex/well-typed/increment-triple.saul)
add_test(NAME my-good-succ COMMAND saul-typechecker typecheck ../tests/complex/well-typed/my-good-succ.saul)
add_test(NAME apply-increase COMMAND saul-typechecker typecheck ../tests/complex/well-typed/apply-increase.saul)
add_test(NAME many-if COMMAND saul-typechecker typecheck ../tests/complex/well-typed/many-if.saul)
add_test(NAME my-good-if COMMAND saul-typechecker typecheck ../tests/complex/well-typed/my-good-if.saul)
add_test(NAME cubes COMMAND saul-typechecker typecheck ../tests/complex/well-typed/cubes.saul)
add_test(NAME my-well-typed-1 COMMAND saul-typechecker typecheck ../tests/complex/well-typed/my-well-typed-1.saul)
add_test(NAME squares_complex COMMAND saul-typechecker typecheck ../tests/complex/well-typed/squares.saul)
add_test(NAME my-test COMMAND saul-typechecker typecheck ../tests/complex/well-typed/my-test.saul)
add_test(NAME nat-to-bool COMMAND saul-typechecker typecheck ../tests/complex/well-typed/nat-to-bool.saul)
add_test(NAME double-application COMMAND saul-typechecker typecheck ../tests/complex/well-typed/double-application.saul)
add_test(NAME added-test-2_complex COMMAND saul-typechecker typecheck ../tests/complex/well-typed/added-test-2.saul)
add_test(NAME bool-to-nat COMMAND saul-typechecker typecheck ../tests/complex/well-typed/bool-to-nat.saul)
add_test(NAME good-succ-1 COMMAND saul-typechecker typecheck ../tests/complex/well-typed/good-succ-1.saul)
add_test(NAME higher-order-1_complex COMMAND saul-typechecker typecheck ../tests/complex/well-typed/higher-order-1.saul)
add_test(NAME records-1 COMMAND saul-typechecker typecheck ../tests/records/well-typed/records-1.saul)
add_test(NAME records-2 COMMAND saul-typechecker typecheck ../tests/records/well-typed/records-2.saul)
add_test(NAME refs-1 COMMAND saul-typechecker typecheck ../tests/references/well-typed/refs-1.saul)
add_test(NAME refs-2 COMMAND saul-typechecker typecheck ../tests/references/well-typed/refs-2.saul)
add_test(NAME refs-3 COMMAND saul-typechecker typecheck ../tests/references/well-typed/refs-3.saul)
add_test(NAME subtyping-1 COMMAND saul-typechecker typecheck ../tests/subtyping/well-typed/subtyping-1.saul)
add_test(NAME subtyping-2 COMMAND saul-typechecker typecheck ../tests/subtyping/well-typed/subtyping-2.saul)
add_test(NAME subtyping-3 COMMAND saul-typechecker typecheck ../tests/subtyping/well-typed/subtyping-3.saul)
add_test(NAME subtyping-4 COMMAND saul-typechecker typecheck ../tests/subtyping/well-typed/subtyping-4.saul)
add_test(NAME subtyping-5 COMMAND saul-typechecker typecheck ../tests/subtyping/well-typed/subtyping-5.saul)
add_test(NAME subtyping-6 COMMAND saul-typechecker typecheck ../tests/subtyping/well-typed/subtyping-6.saul)
add_test(NAME subtyping-7 COMMAND saul-typechecker typecheck ../tests/subtyping/well-typed/subtyping-7.saul)
add_test(NAME subtyping-8 COMMAND saul-typechecker typecheck ../tests/subtyping/well-typed/subtyping-8.saul)
add_test(NAME panic-1 COMMAND saul-typechecker typecheck ../tests/exceptions/well-typed/panic-1.saul)
add_test(NAME panic-2 COMMAND saul-typechecker typecheck ../tests/exceptions/well-typed/panic-2.saul)
add_test(NAME general-recursion COMMAND saul-typechecker typecheck ../tests/recursions/well-typed/general-recursion.saul)
add_test(NAME structurals COMMAND saul-typechecker typecheck ../tests/structurals/well-typed/structurals.saul)
add_test(NAME ignore COMMAND saul-typechecker typecheck ../tests/units/well-typed/ignore.saul)