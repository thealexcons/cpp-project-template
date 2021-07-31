cmake_minimum_required(VERSION 3.10)
project(ExampleProject)

set(CMAKE_CXX_STANDARD 17)

# Set #includes directory
include_directories(src)

# Set source code directory
add_subdirectory(src)

# Set unit tests directory
add_subdirectory(test)

# Add libraries
add_subdirectory(lib/googletest)
