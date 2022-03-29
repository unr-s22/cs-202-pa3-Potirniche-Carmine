#include "Account.h"

Account::Account(Money* initialDeposit)
{
    makeDeposit(initialDeposit);
}

void Account::makeDeposit(Money* deposit)
{
    deposits.push_back(deposit);
    changeFlag = true;
}

void Account::makeWithdrawals(Money* withdrawal)
{
    withdrawals.pop_back(withdrawal);
    changeFlag = true;
}

std::ostream& operator << (std::ostream& out, const Account& a)
{
    if(a.changeFlag = true)
    {
        for(Money& m : a.deposits)
        {
            totalDeposits += m;
        }
        for(Money& m : a.withdrawals)
        {
            totalWithdrawals += m;
        }
        a.balance = totalDeposits - totalWithdrawals;

        a.changeFlag = false;
    }

    std::stringstream print;

    print << "Account Details" << std::endl;
    print << "__________________________" << std::endl;
    print << "Current Balance: " << a.balance << std::endl;
    print << "__________________________" << std::endl;
    print << "Number of Deposits: " << a.deposits.size() << std::endl;
    print << "____________________" << std::endl;
    if(a.deposits.size() < 1)
    {
        print << "(0)" << std::endl;
    } else
    {
        int dCounter = 1;
        for(Money& m : a.deposits)
        {
            print << "(" << dCounter << ")" << m << std::endl;
            printDCounter++;
        }
    }
    print << "__________________________" << std::endl;
    print << "Number of Withdrawals" << a.withdrawals.size() << std::endl;
    print << "__________________________" << std::endl;
    if(a.withdrawals.size() < 1)
    {
        print << "(0)" << std::endl;
    } else
    {
        int wCounter = 1;
        for(Money& m : a.withdrawals)
        {
            print << "(" << wCounter << ")" << m << std::endl;
        }
    }

    out << print.str();
    return out;
}