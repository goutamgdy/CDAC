#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

template<class T>
bool Search(T arr[], int size, T key){
    for(int i =0;i<size;i++){
        if(arr[i] == key)
            cout<<"\n\n\t Key Found: ";
            // cout<<"\n\n\t******** Type: "typeid(T);
            return true;
    }
    cout<<"\n\n\t******** Key Not Found";
    return false;
}

int main(){
    int arr[] = {10,7,8,3,4};
    Search(arr, 5, 10);
    // if(Search(arr, 5,17)){
    //     cout<<"\n\n\t Entered key found";
    // }
    char arr1[7] = "Goutam";
    Search(arr1, 7, 'u');
}