#ifndef BASIC_H_INCLUDED
#define BASIC_H_INCLUDED
#include "bankacc.h"
#include"savingacc.h"
#include"basic.h"
#include "Client.h"
class BasicAcc : public Acc
{
    public:
    BasicAcc();
  BasicAcc(int id,int balance);
    void withdraw();
    void deposit();

};





#endif // BASIC_H_INCLUDED
