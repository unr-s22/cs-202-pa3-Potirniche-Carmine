#include "Account.h"

Account::Account(Money initialDeposit)
{
    makeDeposit(initialDeposit);
    changeFlag = 1;
}

void Account::makeDeposit(Money deposit)
{
    deposits.push_back(deposit);
    changeFlag = 1;
}

void Account::makeWithdrawals(Money withdrawal)
{
    withdrawals.push_back(withdrawal);
    changeFlag = 1;
}

std::ostream& operator << (std::ostream& out, const Account& a)
{
    Money totalDeposits;
    Money totalWithdrawals;
    for(Money m : a.deposits)
    {
        totalDeposits = totalDeposits + m;
    }
    for(Money m : a.withdrawals)
    {
        totalWithdrawals = totalWithdrawals + m;
    }


    std::stringstream print;

    print << "Account Details" << std::endl;
    print << "__________________________" << std::endl;
    print << "Current Balance: " << totalDeposits - totalWithdrawals << std::endl;
    print << "__________________________" << std::endl;
    print << "Number of Deposits: " << a.deposits.size() << std::endl;
    print << "____________________" << std::endl;
    if(a.deposits.size() < 1)
    {
        print << "(0)" << std::endl;
    } else
    {
        int dCounter = 1;
        for(Money m : a.deposits)
        {
            print << "(" << dCounter << ") " << m << std::endl;
            dCounter++;
        }
    }
    print << "__________________________" << std::endl;
    print << "Number of Withdrawals: " << a.withdrawals.size() << std::endl;
    print << "__________________________" << std::endl;
    if(a.withdrawals.size() < 1)
    {
        print << "(0)" << std::endl;
    } else
    {
        int wCounter = 1;
        for(Money m : a.withdrawals)
        {
            print << "(" << wCounter << ") " << m << std::endl;
            wCounter++;
        }
    }

    out << print.str();
    return out;
}