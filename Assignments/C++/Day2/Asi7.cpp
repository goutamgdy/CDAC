#include<bits/stdc++.h>

using namespace std;
//   Dynemic array creation
void display(int arr[], int n){
    for(int i =0;i<n;i++){
        cout<<arr[i];
    }
}
void MaxMin(int arr[], int n){
    int max = arr[0];
    int min = arr[0];
    for(int i =0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }   
        if(arr[i]<min){
            min = arr[i];
        }
    }
    cout<<"Maximum: "<<max<<" Minimum: "<<min;
}
void search(int arr[], int key){
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i =0;i<n;i++){
        if(arr[i]==key){
            cout<<"Element found at index "<<i;
        }
    }
    cout<<"Element is not found";
}
int main(){
    int size,key;
    cout<<"Enter the size of array: ";
    cin>>size;
    int* arr = new int[size];
    cout<<"Enterarray elemwnts: "<<endl;
    for(int i =0;i<size;i++){
        cin>>arr[i];
    }
    display(arr, size);
    MaxMin(arr, size);
    cout<<"Enter the number u want to cheak if it is presented in array :";
    cin>>key;
    search(arr, key);
    return 0;
}