#ifndef MOCK_H
#define MOCK_H

#include "DataBaseConnect.h"


class MyDataBase{
    DataBaseConnect &dbC;

    public:
    MyDataBase(DataBaseConnect &_dbC);
    int Init(std::string username, std::string password);
};

#endif //MOCK_H






