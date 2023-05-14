all: src/Saul/TestSaul build/saul-typechecker

typecheck: build/saul-typechecker
	./build/saul-typechecker

src/Saul/TestSaul: Saul.cf
	mkdir -p src/Saul/
	cd src/Saul/ && (bnfc -m --cpp ../../Saul.cf -l -p Saul; cd ../../)
	cd src/Saul/ && (make; cd ../../)

build/saul-typechecker: src/main.cpp src/TypeCheck.cpp src/TypeCheck.h src/VisitTypeCheck.cpp src/VisitTypeCheck.h src/Saul/TestSaul CMakeLists.txt
	cmake -S. -Bbuild
	cmake --build build/ --target saul-typechecker --

test: build/saul-typechecker
	cd build/ && (ctest; cd ../)

.PHONY: all typecheck
