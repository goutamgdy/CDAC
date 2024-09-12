#define _CRT_SECURE_NO_WARNINGS
#include <fstream>
#include <iostream>
using namespace std;


int main(){
    ofstream fout("test.txt");
    if(!fout){
        cout<<"\n File OPening Error"<<endl;
    }
    else{
        fout << "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    }
    fout.close();
    ifstream fin("test.txt");
    char c;
    while(fin){
        if(fin){
            fin.get(c);
        }
        else{
            cout<<"\nFile not found";
            break;
        }
    }
    

    fin.close();
}