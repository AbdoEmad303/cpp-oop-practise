#include <iostream>
#include "bankaccount.h"

using namespace std;

int main()
{
    bankaccount account1(10, "abdo", 20000);
    bankaccount account2(20, "Ahmed", 5000);
    bankaccount account3;

    account1.deposit(100);
    account1.withdrow(900);

    cout << "Account 1:" << endl;
    account1.accountinfo();

    cout << endl << endl;

    cout << "Account 2:" << endl;
    account2.accountinfo();

    cout << endl << endl;

    cout << "Account 3:" << endl;
    account3.accountinfo();

    return 0;
}
