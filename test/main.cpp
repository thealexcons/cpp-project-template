#include "gtest/gtest.h"

// Run all the tests in this directory
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
