#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;


// Exception-> It is defined as run-time anomalies
// Keywords-> try, catch, throw
class Stack
{   int top;
    int size;
    int* arr;
    public:
        Stack();
        Stack(int);
        void push(int);
        int pop();
        void Display();
};

Stack :: Stack(){
    top = -1;
    size = 3;
    arr = new int[size];
}
Stack :: Stack(int s){
    size = s;
    top = -1;
    arr = new int[size];
}
void Stack :: push(int key){
    if(top == size - 1){
       throw 1;
    }
    top++;
    arr[top] = key;

}

int Stack :: pop(){
    int data = -99999;
    if(top == -1){
        throw 1;
    }
    return arr[top--];
}

void Stack::Display()
{
	cout << "\n\t *********** Stack Is ********\n";
	for (int i= top; i >= 0; i--)
		cout << "\n\t " << arr[i];
}

int main(){
   Stack s1(5);
   try
   {
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);
    s1.push(60);
   }
   catch(int)
   {
        cout<<"Overflow !!"<<endl;
   }
   try{
        s1.pop();
        s1.pop();
        s1.pop();
        s1.pop();
        s1.pop();
        s1.pop();
   }
   catch(int){
    cout<<"Underflow !!"<<endl;
   }
   return 0;
}
