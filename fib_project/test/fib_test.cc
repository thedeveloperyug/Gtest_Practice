#include "src/fib.h"
#include <gtest/gtest.h>

TEST(FibTest, HandleCornerCases){
    EXPECT_EQ(fib(0),0);
    EXPECT_EQ(fib(1), 1);
}

TEST(FibTest, HandleGeneralCases){
    EXPECT_EQ(fib(5),5);
    EXPECT_EQ(fib(10),55);
}