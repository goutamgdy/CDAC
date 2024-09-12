#include <iostream>
#include <cstring>
using namespace std;

class MyException
{
    int line;
    char file[100];
    char fun[100];
    public:
        MyException();
        MyException(int, const char*, const char*);
        void display();
};
MyException :: MyException(){};
MyException :: MyException(int l, const char* fl, const char* fn){
    line = l;
    strcpy(file, fl);
    strcpy(fun, fn);
}

void MyException :: display(){
    cout<<"Line: "<<line<<endl;
    cout<<"File: "<<file<<endl;
    cout<<"Function: "<<fun<<endl;
}
double Divide(int num, int den){
    if(den == 0){
        throw new MyException(__LINE__, __FILE__, __FUNCTION__);
    }
    return (float) num / den;
}
int main(){
    try{
        cout<<Divide(2,0)<<endl;
    }
    catch(MyException *eptr){
        eptr->display();
    }
    return 0;
}