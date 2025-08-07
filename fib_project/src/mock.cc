#include<iostream>
#include<string>




class DataBaseConnect{
      public:
      virtual bool login(std::string username, std::string password) { return true;}
      virtual bool logout(std::string username) { return true;};
      virtual int fetchRecord(){return -1;};
};



class MyDataBase{
    DataBaseConnect &dbC;

    public:
    MyDataBase(DataBaseConnect &_dbC) : dbC(_dbC) {}

    int Init(std::string username, std::string password){
        if(dbC.login(username, password) != true){
            std::cout<<"DataBase Connection Failure !!!\n";
            return -1;
        }else{
            std::cout<<"DataBase Connection Successfull !!!\n";
            return 1;
        }
    }

};






