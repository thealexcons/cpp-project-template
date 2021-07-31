#include "gtest/gtest.h"
#include "another_module/Another.h"

TEST(fooTest, test1) {
    //arrange
    //act
    //assert
    EXPECT_EQ (Another::foo (0),  0);
    EXPECT_EQ (Another::foo (10), 20);
    EXPECT_EQ (Another::foo (50), 100);
}
