#include <iostream>
#include <gtest/gtest.h>
using namespace std;

class MyClass
{
private:
    int _base_value;

public:
    MyClass(int _bv) : _base_value(_bv) {}

    void Increment(int byValue)
    {
        _base_value += byValue;
    }

    int getValue() { return _base_value; }
};

// // multiple test case 1
// TEST(ClassTest, Increment_by_5)
// {
//     // Arrrange
//     MyClass mc(100);

//     // Act
//     mc.Increment(5);

//     // Assert
//     ASSERT_EQ(mc.getValue(), 105);
// }
// // multiple test case 2
// TEST(ClassTest, Increment_by_10)
// {
//     // Arrrange
//     MyClass mc(100);

//     // Act
//     mc.Increment(10);

//     // Assert
//     ASSERT_EQ(mc.getValue(), 110);
// }

// To solve this problem avoiding multiple test case we'll
// use test fixtures

struct MyClassTest : public testing::Test
{
    MyClass *mc;

    /*
    The SetUp() function is used to initialize any resources, objects, or state that are required for a test case.*/
    void SetUp()
    {
        mc = new MyClass(100); // allocating the memory
        cout << "Alive" << endl;
    }

    /*The TearDown() function is used to clean up any resources, objects, or state after a test case has run. */
    void TearDown()
    {
        delete mc; // de-allocating the memory
        cout << "dead" << endl;
    }
};

// Test Fixture
TEST_F(MyClassTest, Increment_by_5) // for multiple test cases
{
    // remove arrange part
    // Act
    mc->Increment(5);
    // Assert
    ASSERT_EQ(mc->getValue(), 105);
}
TEST_F(MyClassTest, Increment_by_10)
{
    // remove arrange part
    // Act
    mc->Increment(10);
    // Assert
    ASSERT_EQ(mc->getValue(), 110);
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    RUN_ALL_TESTS();

    return 0;
}