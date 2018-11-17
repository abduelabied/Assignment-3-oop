#ifndef SAVINGACC_H_INCLUDED
#define SAVINGACC_H_INCLUDED
#include"bankacc.h"
#include "Client.h"
#include"savingacc.h"
class SavingAcc : public Acc
{


public:
    SavingAcc();
    SavingAcc(int id,int balance);
    void withdraw();
    void deposit();

    };



#endif // SAVINGACC_H_INCLUDED
