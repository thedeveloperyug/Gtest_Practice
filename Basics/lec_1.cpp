#include <iostream>
#include <gtest/gtest.h>
using namespace std;


// Passed when comparision is True
TEST(TestName, Subtest_1){
    ASSERT_TRUE(1==1);
}


// Failed when comparision is True
TEST(TestName, Subtest_2){
    ASSERT_TRUE(1==2);
}

// Passed when comparision is false
TEST(TestName, Subtest_3){
    ASSERT_FALSE(1==2);
}

// Basic Structure of Gtest
int main(int argc,char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

