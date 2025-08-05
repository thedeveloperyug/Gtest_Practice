#include <iostream>
#include <gtest/gtest.h>
#include <cstring>

class MyClass
{
private:
    std::string id;

public:
    MyClass(std::string id) : id(id) {}
    std::string GetId()
    {
        return id;
    }
    // ~MyClass();
};

// Sample 1
TEST(TestName, increment_by_5)
{
    int value = 100;
    int increment = 5;
    value += increment;
    ASSERT_EQ(value, 105); // passed
    // ASSERT_EQ(value,107); // failed
}

// Smaple 2:  Independent test case
TEST(TestName, decrement_by_5)
{
    int value = 100;
    int decrement = 5;
    value -= decrement;
    ASSERT_EQ(value, 95); // passed
    // ASSERT_EQ(value,80); // failed
}
// Sample 3 : Class Based
TEST(TestName, ClassBasedTest)
{
    MyClass mc("root");

    std::string value = mc.GetId();

    ASSERT_STREQ(value.c_str(), "root"); // passed : fatal faliure
    EXPECT_STREQ(value.c_str(), "root"); // passed : non - fatal faliure
    // ASSERT_EQ(value,107); // failed
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}