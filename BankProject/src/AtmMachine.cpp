#include "AtmMachine.h"

// Method 1 --> Parameterized constructor of AtmMachine.
AtmMachine::AtmMachine(BankServer* bank_server): m_bank_server(bank_server){}

// Method 2 --> withdraw(int account_number, int value)
bool AtmMachine::withdraw(int account_number, int value){
     bool result = false;

     m_bank_server->Connect();
     auto available_balance = m_bank_server->GetBalance(account_number);

     if(available_balance >= value){
        m_bank_server->Debit(account_number, value);
        result = true;
     }

     m_bank_server->Disconnect();
     return result;
}
