# gTest

From the root of project directory  
```bash
make  
./CplusTest
```  

## Build tests

From the root of project directory  
`make tests`  

This command:

* Invokes the Makefile in the tests/ directory.
* Compiles the test source file (test_math_functions.cpp).
* Links it with the math_functions.o object file and Google Test libraries.
* Generates the test executable test_runner in the tests/ directory.  

Navigate to the tests/ directory and execute the tests:  
```bash
cd tests  
make test  
```

