#include<iostream>
#include<string>
using namespace  std;

class BankAccount{
    string ownername;
    int accountnumber;
    float balance;
    static int count;
    public:
    BankAccount(){
        ownername="no name";
        accountnumber=0;
        balance=0;
        count++;
    }
    BankAccount(string own,int acounum,float bal){
        ownername=own;
        accountnumber=acounum;
        balance=bal;
        count++;
    }
    BankAccount(string ow,int acnum){
        ownername=ow;
        accountnumber=acnum;
        balance=0;
        count++;
    }
    BankAccount(const BankAccount &op){
        accountnumber=op.accountnumber;
        ownername=op.ownername;
        balance=op.balance;
        count++;

    }
    void despoit(int dep){
       balance= balance+dep;

    }
    void despoit(int dep,int acountnum){
       balance= balance+dep;

    }
    static void totalnumacount(){
        cout<<"total number of account ="<<count;
    }
    void transfer(BankAccount& recevie,double ammount){
        if(ammount<=0){
            cout<<"invaild ammount"<<endl;
            return;
        }
        if(ammount>balance){
            cout<<"money more balance"<<endl;
            return;
        }
        balance-=ammount;
        recevie.balance+=ammount;

        cout<<"transfer succested"<<endl;

    }
    void display(){
        cout<<"account numer ="<<accountnumber<<endl;
        cout<<"owner is "<<ownername<<endl;
        cout<<"balance is "<<balance<<endl;
    }
    BankAccount operator+ (BankAccount accbal2){
        BankAccount accbal3;
        accbal3.balance=balance+accbal2.balance;
        return accbal3;
    }
    bool operator==(BankAccount accbal2)
{
    return balance == accbal2.balance;
}









};