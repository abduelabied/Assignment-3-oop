#include"basic.h"
#include<iostream>
#include "bankacc.h"
using namespace std;
BasicAcc::BasicAcc(){
id=0;
balance=0;
}
BasicAcc::BasicAcc(int id,int balance){
this->id=id;
this->balance=balance;
}
void BasicAcc::withdraw(){
    int x;
    cout<<"Enter Account ID " ;
    cin>>id;
    cout<<"Account Type is : Basic "<<endl;
    cout<<"Please Enter your amount of money you want to withdraw/n";
    cin>>x;
    while(balance<x){
        cout<<"Your balance is not enough Please enter amount of money smaller than befor/n";
        cin>>x;
    }
    balance-=x;
   cout<<"Thank You "<<endl;
   cout<<"Account ID : "<<id<<endl;
    cout<<"your balance after your withdraw operation = "<<balance<<endl;
}
void BasicAcc::deposit(){
    int x;
    cout<<"Enter Account ID " ;
    cin>>id;
    cout<<"Please Enter your amount of money you want to deposit/n";
    cin>>x;
    balance+=x;
    cout<<"Thank You "<<endl;
    cout<<"Account ID : "<<id<<endl;
    cout<<"your balance after your deposit operation = "<<balance<<endl;

}






