#ifndef ATM_MACHINE_H
#define ATM_MACHINE_H

#include "BankServer.h"

class AtmMachine{
  
     private:
     BankServer* m_bank_server;

     public:
     AtmMachine(BankServer* bank_server);
     bool withdraw(int account_number, int value);

     
};





#endif //ATM_MACHINE_H