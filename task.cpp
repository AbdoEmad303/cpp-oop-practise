#include<iostream>
#include<string>
#include"BankAccount.h"
using namespace  std;


int BankAccount::count=0;
int main()
{
    BankAccount account1("Abdelrhman", 1001, 5000);
    BankAccount account2("Ahmed", 1002, 3000);

    BankAccount account3;
    BankAccount account4("Omar", 1003);

    BankAccount account5 = account1;

    account1.display();
    cout << endl;

    account2.display();
    cout << endl;

    account3.display();
    cout << endl;

    account4.display();
    cout << endl;

    account5.display();
    cout << endl;

    account1.despoit(1000);
    account1.display();

    cout << endl;

    account1.transfer(account2, 2000);

    account1.display();
    cout << endl;

    account2.display();
    cout << endl;

    BankAccount account6 = account1 + account2;

    account6.display();

    

    if (account1 == account2)
    {
        cout << "Accounts have the same balance" << endl;
    }
    else
    {
        cout << "Accounts have different balances" << endl;
    }

    

    BankAccount::totalnumacount();

    return 0;
}