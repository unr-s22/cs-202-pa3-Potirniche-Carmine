#include <iostream>
#include "Money.h"
#include "Account.h"

using namespace std;

int main(){
    Money i(300,23); //initial
    Money firstDeposit(200,0); //deposit
    Money secondDeposit(300,24); //deposit
    Money thirdDeposit(501,22); //deposit
    Money firstWithdraw(300,10); //withdrawal
    Money secondWithdraw(201,34); //withdrawal

    Account a(i);
    cout << a << endl;

    a.makeDeposit(firstDeposit);
    a.makeDeposit(secondDeposit);
    a.makeDeposit(thirdDeposit);
    cout << a << endl;

    a.makeWithdrawals(firstWithdraw);
    a.makeWithdrawals(secondWithdraw);
    cout << a << endl;

    Money m(100,10);
    Money n(100,10);
    if(m > n){
        cout << m << ">" << n << endl;
    }else if (m < n){
        cout << m << "<" << n << endl;
    }else if (m <= n){
        cout << m << "<=" << n << endl;
    }else if (m >= n){
        cout << m << ">=" << n << endl;
    }else if (m == n){
        cout << m << "=" << n << endl;
    }else if (m != n){
        cout << m << "is not the same as " << n << endl;
    }


}
