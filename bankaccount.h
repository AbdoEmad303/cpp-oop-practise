#include<string>
#include<iostream>
using namespace std;
class bankaccount{
    private:
    int accountnumber;
    string accountholdername;
    int balance;
    public:
    bankaccount(){
        accountnumber=0;
        accountholdername=" ";
        balance=0;
    };
    bankaccount(int acou,string name,int bala){
        accountnumber=acou;
        accountholdername=name;
        balance=bala;
        
    }
    void deposit(int de){
        balance=balance+de;
    }
    void withdrow(int wi){
        if(balance<=wi){
        balance=balance-wi;
        }else
        cout<<"the money not enoght"<<endl;
    }
    void accountinfo(){
        cout<<"account number is "<< accountnumber<<endl;
        cout<<"account holder name is "<< accountholdername<<endl;
        cout<<"balance ="<< balance;
    }



};