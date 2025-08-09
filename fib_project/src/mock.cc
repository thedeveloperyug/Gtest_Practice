#include "mock.h"


// 1. Parameterized constructor of MyDataBase
MyDataBase::MyDataBase(DataBaseConnect& _dbC): dbC(_dbC){}

// 2. Init Method of class MyDataBase
int MyDataBase::Init(std::string username, std::string password){
        if(dbC.login(username, password) != true){
            std::cout<<"DataBase Connection Failure !!!\n";
            return -1;
        }else{
            std::cout<<"DataBase Connection Successfull !!!\n";
            return 1;
        }
    }
















