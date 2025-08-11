#ifndef BANK_SERVER_H
#define BANK_SERVER_H

#include<iostream>

class BankServer{
     public:
     virtual ~BankServer(){}
     virtual void Connect()=0;
     virtual void Disconnect() = 0;
     virtual void Credit(int account_number, int value) = 0;
     virtual void Debit(int account_number, int value) = 0;
     virtual void Withdraw(int account_number, int value) = 0;
     virtual bool DoubleTransaction(int account_number, int value1, int value2) = 0;
     virtual int GetBalance(int account_number) const = 0;
};

#endif //BANK_SERVER_H