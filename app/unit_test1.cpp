#include <iostream>
#include <gtest/gtest.h>

TEST(TestName, subtest_1)
{
    EXPECT_EQ(1, 1);
    EXPECT_EQ(1, 2);
    /*
    Don't write multiple expect or assert in once if any of fail
    the whole test consider as failed.
    */
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}