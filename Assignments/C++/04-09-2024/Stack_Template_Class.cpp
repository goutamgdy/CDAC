#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

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
    arr = new int[size];
}
void Stack :: push(int key){
    if(top == size - 1){
        cout<<"\n\n\t****** Stack Overflow !!"<<endl;
    }
    else{
        top++;
        arr[top] = key;
    }
}

int Stack :: pop(){
    int data = -99999;
    if(top == -1){
        cout<<"\n\n\t******* Stack Underflow"<<endl;
    }
    else{
        data = arr[top];
        top--;
    }
    return data;
}

void Stack::Display()
{
	cout << "\n\t *********** Stack Is ********\n";
	for (int i= top; i >= 0; i--)
		cout << "\n\t " << arr[i];
}

int main(){
   Stack s1(5);
   int ch, no;
   cout<<"\n\n\t 1. Push()"
   <<"\n\n\t 2. Pop()"
   <<"\n\n\t 3. Display()"
   <<"\n\n\t 0. Exit/"
   <<"\n\n\t Enter your choice";
   cin>>ch;
   do
   {
        switch (ch)
		{
		case 1:
			cout << "\n\n\t Enter Data To Insert ";
			cin >> no;
			s1.push(no);
			break;
		case 2:
			cout << "\n\n\t Delete No " << s1.pop();
			break;
		case 3:
			s1.Display();

		}
   } while (ch != 0);
   
   
}
