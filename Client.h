#ifndef CLIENT_H
#define CLIENT_H
#include<iostream>
using namespace std;
#include "bankacc.h"
class Client:public Acc
{
    public:
    Client();
    Client(string name,string address,string phonenumber);
    private:
    string name;
    string address;
    string phonenumber;
    static Client *savingaccount;
    static Client *basicaccount;
    static int savingcount1;
    static int basiccount2;
    bool Signup();
    void check();
    void showprofile();

};

#endif // CLIENT_H
