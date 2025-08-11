#ifndef MOCK_BANK_SERVER_H
#define MOCK_BANK_SERVER_H

#include "BankServer.h"
#include <gtest/gtest.h>
#include <gmock/gmock.h>

class MockBankServer : public BankServer{
      public:
      MOCK_METHOD(void, Connect, (), (override));
      MOCK_METHOD(void, Disconnect, (), (override));
      MOCK_METHOD(void, Credit, (int, int), (override));
      MOCK_METHOD( void, Debit, (int, int), (override));
      MOCK_METHOD(bool, DoubleTransaction, (int, int, int), (override));
      MOCK_METHOD(int, GetBalance, (int), (const,override));

};




#endif //MOCK_BANK_SERVER_H