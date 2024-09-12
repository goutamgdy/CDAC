#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
// template<class T>
class Array
{
    int size;
    int *arr;
    public:
        Array(){
            size = 5;
            arr = new int[size];
            for(int i =0;i<size;i++){
                arr[i] = 0;
            }
        }
        Array(int s){
            size = s;
            arr = new int[size];
            for(int i =0;i<size;i++){
                arr[i] = 0;
            }
        }
        Array(Array &obj){    
            this->size = obj.size;
            this->arr = new int[size];
            this->arr = obj.arr;
        }
        void Display(){
            cout<<"****************";
            for(int i =0;i<size;i++){
                cout<<"\n"<<arr[i];
            }
        }
        void Accept(){
            cout<<"\n Enter Array Elements :";
            for(int i =0;i<size;i++){
                cin>>arr[i];
            }
        }
        int Search(int key){
            for(int i = 0;i<size;i++){
                if(arr[i] == key){
                    return i;
                }
            }
            return -1;
        }
        void Reverse(){
            int i = 0, j = size - 1;
            int temp;
            while(i<j){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        void Sort(){
            int temp;
            for(int i =0;i<size - 1;i++){
                for(int j=0;j<size - 1 - i;j++){
                    if(arr[j] > arr[j+1]){
                        temp = arr[j];
                        arr[j] = arr[j+1];
                        arr[j+1] = temp;
                    }
                }
            }
        }
        // int operator[](int key){

        // }
        ~Array(){
            delete[]arr;
        }
};

// template<class T>
int main(){
    int size;
    cout<<"\n Enter Array Size: ";
    cin>>size;
    Array arr(size);
    Array arr1(arr);
    int ch;
    cout<<"\n Enter Your Choice: ";
    do{
        cout<<"\n 1. Accept"
            <<"\n 2. Display"
            <<"\n 3. Reverse"
            <<"\n 4. Sort"
            <<"\n 5. Search"
            <<"\n 6. Copy to new Array";
        cin >> ch;
        switch(ch){
            case 1:
                arr.Accept();
                break;
            case 3:
                arr.Reverse();
                arr1.Display();
                break;
            case 2:
                arr1.Display();
                break;
            case 4:
                arr.Sort();
                arr1.Display();
                break;
            case 5:
                int key;
                cout<<"\n Enter key: ";
                cin>>key;
                if(arr.Search(key) != -1){
                    cout<<"\n Key Found at index: "<<arr.Search(key);
                }else{
                    cout<<"\n Key not Foun";
                }
            
            default:
                break;  

        }
    }while(ch);
}

