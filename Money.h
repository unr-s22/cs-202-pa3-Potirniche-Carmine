#ifndef MONEY_H
#define MONEY_H
#include <iostream>

using namespace std;

class Money {
private:
    int cents, dollars;

public:
Money();

Money(int dollarsIn, int centsIn);

int getDollars();
int getCents();

void dollarsActual(int dollars);
void centsActual(int cents);

friend bool operator == (const Money&, const Money&);
friend bool operator < (const Money&, const Money&);
friend bool operator > (const Money&, const Money&);
friend bool operator >= (const Money&, const Money&);
friend bool operator <= (const Money&, const Money&);
friend bool operator != (const Money&, const Money&);
friend Money operator + (const Money&, const Money&);
friend Money operator - (const Money&, const Money&);

friend ostream& operator << (ostream &stream, const Money &total);
};

#endif