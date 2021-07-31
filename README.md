## C++ Project Template


### First time build
To build for the first time:

1. Create a build directory: ``mkdir build``
2. Change into the directory: ``cd build``
3. Run CMake: ``cmake .. -DCMAKE_BUILD_TYPE=Debug -G "Unix Makefiles"``
4. Use the generated Makefile: ``make all``

This will generate two executables (inside ``build``):

- ``./test/ExampleProject_test`` to run the tests
- ``./src/ExampleProject`` to run the application

### Running the application and tests

Once CMake has generated the Makefile inside ``build``, you can make the targets directly:

- To compile and run tests whenever you make a change to the source code:
``make ExampleProject_test; tst/ExampleProject_test``

- Similarly, to quickly compile and run the application after making changes, run:
``make ExampleProject; src/ExampleProject``




**Don't forget to change the project name in the root ``CMakeLists.txt`` file!**