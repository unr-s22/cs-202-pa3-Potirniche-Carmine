#include <iostream>
#include "Money.h"
#include "Account.h"

int main()
{
    Money initial(300, 23);
    Account myAccount(initial*);

    std::cout << myAccount << std::endl;

    Money firstDeposit(200, 0);
    myAccount.makeDeposit(firstDeposit);
    Money secondDeposit(300, 24);
    myAccount.makeDeposit(secondDeposit);
    Money thirdDeposit(501, 22);
    myAccount.makeDeposit(thirdDeposit);

    std::cout << myAccount << std::endl;

    Money firstWithdrawal(300, 10);
    myAccount.makeWithdrawals(firstWithdrawal);
    Money secondWithdrawal(201, 34);
    myAccount.makeWithdrawals(secondWithdrawal);
    
    return 0;
}