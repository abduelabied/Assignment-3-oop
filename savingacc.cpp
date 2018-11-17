#include<iostream>
#include"bankacc.h"
#include"savingacc.h"
using namespace std;
SavingAcc::SavingAcc()
{
    id=0;
    balance=0;

}
SavingAcc::SavingAcc(int id,int balance){
this->id=id;
this->balance=balance;
}
void SavingAcc::withdraw()
{
    if(balance <= 1000)
    {
        cout<<"Sorry You can not withdraw from this account/n";
    }
    else
    {
        int x;
          cout<<"Enter Account ID " ;
          cin>>id;
         cout<<"Account Type is : Saving "<<endl;
        cout<<"Please Enter your amount of money you want to withdraw/n";
        cin>>x;
        balance-=x;
           cout<<"Thank You "<<endl;
         cout<<"Account ID : "<<id<<endl;
        cout<<"your balance after your withdraw operation = "<<balance<<endl;


    }
}
void SavingAcc::deposit()
{
    int x;
       cout<<"Enter Account ID " ;
          cin>>id;
         cout<<"Account Type is : Saving "<<endl;
    cout<<"Please Enter your amount of money you want to deposit/n";
    cin>>x;
    while(x <100){
            cout<<"Please Enter amount of money grater than 100/n";
        cin>>x;
    }
    balance+=x;

   cout<<"Thank You "<<endl;
         cout<<"Account ID : "<<id<<endl;
          cout<<"your balance after your deposit operation = "<<balance<<endl;

}
