#include <vector>
#include <iostream>
#include <gtest/gtest.h>
using namespace std;

class Stack
{
private:
    vector<int> vStack = {};

public:
    // Stack(){};
    void push(int value)
    {
        vStack.push_back(value);
    }

    int pop()
    {
        if (vStack.size() > 0)
        {
            int value2 = vStack.back();
            vStack.pop_back();
            return value2;
        }
        else
        {
            return -1;
        }
    }
    // ~Stack();
};

struct stackTest : public testing::Test
{
    Stack s1;

    void SetUp()
    {
        int value[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

        for (auto &val : value)
        {
            s1.push(val);
        }
    }
    void TearDown()
    {
    }
};
// Unit Test Code for Stack
TEST_F(stackTest, PopTest)
{
    int lastPoppedValue = 9;
    while (lastPoppedValue != 1)
    {
        ASSERT_EQ(s1.pop(), lastPoppedValue--);
    }
}

int main()
{
    testing::InitGoogleTest();
    RUN_ALL_TESTS();
    return 0;
}