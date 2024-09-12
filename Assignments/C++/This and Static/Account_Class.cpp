#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Account
{
    int Acc_No;
    char name[20];
    double Balance;
    static int AcoountCount;
    public:
        Account(){
            strcpy(name, "ABC");
            Balance = 10000.00;
        }
        Account(char nm[], double Balance){
            Acc_No = AcoountCount;
            strcpy(name, nm);
            AcoountCount++;
        }
};