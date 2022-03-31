#ifndef ACCOUNT_H
#define ACCOUNT_H

#include "Money.h"
#include <iostream>
#include <vector>
#include <sstream>

class Account
{
private:
    std::vector<Money> deposits;
    std::vector<Money> withdrawals;
    bool changeFlag = 0;
public:
    Account(Money);
    void makeDeposit(Money);
    void makeWithdrawals(Money);
    friend std::ostream& operator << (std::ostream&, const Account&);
};

#endif