#include<iostream>
#include "bankacc.h"
using namespace std;

Acc::Acc(){
    id=0;
    balance=0;
}
Acc::Acc(int id,int balance){
    this->id=id;
    this->balance=balance;
}

