#include<gtest/gtest.h>
#include "src/calculator.h"


//Create a test fixture for the Calculator class
class CalculatorTest : public ::testing::Test{
    protected:
        Calculator obj;

        void SetUp() override{
            std::cout<<" 1. I run before each test-case \n";
        }

        void TearDown() override{
            std::cout<<" 2. I run after each test-case \n";
        }
};


TEST_F(CalculatorTest, AddPositiveNumbers){
    EXPECT_EQ(obj.add(3,4), 7);
    EXPECT_EQ(obj.add(10,20), 30);
}

TEST_F(CalculatorTest, AddNegativeNumbers){
    EXPECT_EQ(obj.add(-3,-4), -7);
    EXPECT_EQ(obj.add(-10,-20), -30);
}

