#include <iostream>
#include"bankacc.h"
#include"savingacc.h"
#include "Client.h"
#include"basic.h"
using namespace std;
int main()
{
  short  choice,choice2;
  Acc*acc;
  while(true){
  cout<<" ----------------Welcome To FCI Banking Application--------------------"<<endl;
  cout<<"1- Create a new account "<<endl;
  cout<<"2- List Clients and Accounts "<<endl;
  cout<<"3- WithDraw money "<<endl;
  cout<<"4- Deposit Money "<<endl;
  cin>>choice;
  if(choice==1){
      acc=new Client();
      acc->Signup();
  }
  if(choice==2){
    acc=new Client();
    acc->showprofile();
  }
  if(choice==3){
   cout<<"What is the type of your Account "<<endl;
   cout<<"1-Basic or 2-Saving " <<endl;
   cin>>choice2;
 if(choice2==1){
  acc=new BasicAcc();
  acc->withdraw();
  }
   if(choice2==2){
  acc=new SavingAcc();
  acc->withdraw();
  }
  }
   if(choice==4){
   cout<<"What is the type of your Account "<<endl;
   cout<<"1-Basic or 2-Saving " <<endl;
   if(choice2==2){
  acc=new SavingAcc();
  acc->deposit();
   }
   if(choice2==1){
  acc=new BasicAcc();
  acc->deposit();
   }
  }
  }
  return 0;
}
