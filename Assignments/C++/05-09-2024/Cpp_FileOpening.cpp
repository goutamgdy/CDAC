#include<fstream>
#include<iostream>
using namespace std;

int main(){
    ifstream fin("Namespace.cpp");
    int Spaces = 0, charactors = 0, lines = 0, digits = 0;
    while(fin){
        if(fin.get() == ' ')Spaces++;
        if(fin.get() == '\n')lines++;
        if(fin.get() <= '0' && fin.get() <= '9')digits++;
        else charactors++;
    }
    cout<<"\n Spaces: "<<Spaces
        <<"\n Digits: "<<digits
        <<"\n Lines: "<<lines
        <<"\n Charctors: "<<charactors;
}
