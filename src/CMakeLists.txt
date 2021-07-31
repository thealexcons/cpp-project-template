set(BINARY ${CMAKE_PROJECT_NAME})

# Use all the files in this directory to build the binary
file(GLOB_RECURSE SOURCES LIST_DIRECTORIES true *.h *.cpp)
set(SOURCES ${SOURCES})
add_executable(${BINARY} ${SOURCES})

# Build as library to include the code in the unit tests
add_library(${BINARY}_lib STATIC ${SOURCES})
