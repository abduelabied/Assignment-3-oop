#ifndef BANKACC_H_INCLUDED
#define BANKACC_H_INCLUDED

class Acc
{
protected:
    int id;
    int balance;
public:
    Acc();
    Acc(int id,int balance);
    virtual void withdraw();
    virtual void deposit();
    virtual bool Signup();
    virtual void showprofile();
};


#endif // BANKACC_H_INCLUDED
