#include <iostream>
#include "Money.h"
#include <ostream>
#include <string>

using namespace std;

Money::Money(){
    dollars = 0;
    cents = 0;
}

Money::Money (int dollarsIn, int centsIn){
    dollars = dollarsIn;
    cents = centsIn;
}

int Money::getCents(){
    return cents;
}

int Money::getDollars(){
    return dollars;
}

void Money::dollarsActual(int dollars){
    this->dollars = dollars;
}

void Money::centsActual(int cents){
    this->cents = cents;
}

bool operator == (const Money&left, const Money&right){
    if (left.dollars == right.dollars){
        return true;
    }
    else if (left.dollars != right.dollars){
        if (left.cents == right.cents){
            return true;
        }else{
            return false;
        }
    }
}

bool operator < (const Money&left, const Money&right){
    if (left.dollars < right.dollars){
        return true;
    }
    else if (left.dollars == right.dollars){
        if (left.cents < right.cents){
            return true;
        }else{
            return false;
        }
    }else{
        return false;
    }
}

bool operator > (const Money&left, const Money&right){
    if (left.dollars > right.dollars){
        return true;
    }
    else if (left.dollars == right.dollars){
        if (left.cents > right.cents){
            return true;
        }else{
            return false;
        }
    }else{
        return false;
    }
}

bool operator >= (const Money&left, const Money&right){
    if (left.dollars >= right.dollars){
        return true;
    }
    else if (left.dollars == right.dollars){
        if (left.cents >= right.cents){
            return true;
        }else{
            return false;
        }
    }else{
        return false;
    }
}

bool operator <= (const Money&left, const Money&right){
    if (left.dollars <= right.dollars){
        return true;
    }
    else if (left.dollars == right.dollars){
        if (left.cents <= right.cents){
            return true;
        }else{
            return false;
        }
    }else{
        return false;
    }
}

bool operator != (const Money&left, const Money&right){
    if (left.dollars != right.dollars){
        return true;
    }
    else if (left.dollars == right.dollars){
        if (left.cents != right.cents){
            return true;
        }else{
            return false;
        }
    }else{
        return false;
    }
}

Money operator + (const Money&left, const Money&right){
    Money total;
        total.dollars = (left.dollars + right.dollars);
        total.cents = (left.cents + right.cents);
        if (total.cents >= 100){
            total.cents = (total.cents - 100);
            total.dollars = (total.dollars + 1);
        }
        return total;
}

Money operator - (const Money&left, const Money&right){
    Money total;
        total.dollars = (left.dollars - right.dollars);
        total.cents = (left.cents - right.cents);
        if (total.cents < 0){
            total.cents = (total.cents + 100);
            total.dollars = (total.dollars - 1);
        }
        return total;
}

ostream& operator<<(ostream &stream, const Money &total){
    stream<< "$" << total.dollars << "." << total.cents;
    return stream;
}