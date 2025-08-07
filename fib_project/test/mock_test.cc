#include "src/mock.cc"
#include <gtest/gtest.h>
#include <gmock/gmock.h>

class MockDB : public DataBaseConnect{
      public:
      public:
    MOCK_METHOD(int, fetchRecord, (), (override));
    MOCK_METHOD(bool, logout, (std::string username), ());
    MOCK_METHOD(bool, login, (std::string username, std::string password), ());
};




TEST(MyDBTest, LoginTest){
    //Arrange:
     

    //Act:


    //Assert:
}