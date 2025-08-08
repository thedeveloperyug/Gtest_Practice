#ifndef DATA_BASE_CONNECT_H
#define DATA_BASE_CONNECT_H

#include<iostream>
#include<string>

class DataBaseConnect{
      public:
      virtual bool login(std::string username, std::string password) { return true;}
      virtual bool logout(std::string username) { return true;};
      virtual int fetchRecord(){return -1;};
};

#endif //DATA_BASE_CONNECT_H
