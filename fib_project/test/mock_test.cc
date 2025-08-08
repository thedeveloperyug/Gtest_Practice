#include "src/mock.h"
#include <gtest/gtest.h>
#include <gmock/gmock.h>

class MockDB : public DataBaseConnect{
    public:
    MOCK_METHOD(int, fetchRecord, (), (override));
    MOCK_METHOD(bool, logout, (std::string username), ());
    MOCK_METHOD(bool, login, (std::string username, std::string password), ());
};




TEST(MyDBTest, LoginTest){
    //Arrange:
     MockDB mdb;
     MyDataBase db(mdb);
     EXPECT_CALL(mdb, login("Terminator","I'm Back"))
        .Times(1)
        .WillOnce(testing::Return(true));

    //Act:
    int return_value = db.Init("Terminator","I'm Back");

    //Assert:
    EXPECT_EQ(return_value, 1);
}