#ifndef ACCOUNT_H
#define ACCOUNT_H

#include "Money.h"
#include <iostream>
#include <vector>

class Account
{
private:
    std::vector<Money*> deposits;
    std::vector<Money*> withdrawals;
    Money* balance;
    bool changeFlag = false;
public:
    Account(Money*);
    void makeDeposit(Money*);
    void makeWithdrawals(Money*);
    friend std::ostream& operator << (std::ostream&, const Account&);
};

#endif