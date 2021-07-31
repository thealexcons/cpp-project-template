## C++ Project Template

To build for the first time:

1. Create a build directory: ``mkdir build``
2. Change into the directory: ``cd build``
3. Run cmake: ``cmake .. -DCMAKE_BUILD_TYPE=Debug -G "Unix Makefiles"``
4. Use the generated Makefile: ``make all``

This will generate two executables:

- ``./test/ExampleProject_test`` to run the tests
- ``./src/ExampleProject`` to run the application

A quick one-liner to compile and run tests whenever you make a change to the source code:

``make ExampleProject_test; tst/ExampleProject_test``


**Don't forget to change the project name in the root ``CMakeLists.txt`` file!**