# Saul typechecker in C++

This is the typechecker for the Saul programming language.

### Requirements

This was developed with:

* make 4.1
* BNFC 2.9.4.1
* flex 2.6.4
* bison 3.8.2
* g++ 11.2.0
* cmake 3.23.0-rc5
* ninja 1.8.2

### Building and running the typechecker

1. To build the typechecker run:

```sh
make
```

This typically involves running BNFC converter, and compiling the project,
resulting in an executable `build/saul-typechecker` that you can now use to type check programs.

2. Now, to run the type checker:

```sh
make typecheck
```

This starts the type checker waiting to input the program. Note that it will accept input until it encounters the end of file (Ctrl+D).

3. To run tests:

```sh
make test
```

This will run the tests specified in [`CMakeLists.txt`](CMakeLists.txt).

### Code Structure

[main.cpp](src/main.cpp) is the main file that contains the logic for reading a program and its arguments.

[`VisitTypeCheck.h`](src/VisitTypeCheck.h) and [`VisitTypeCheck.cpp`](src/VisitTypeCheck.cpp) files contain the content of the type checker logic. 
The input program from the typechecker is passed directly to the `typecheckProgram` function. This function runs a viewer, which checks variable types, function parameters types and their number and other things.