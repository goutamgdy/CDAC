// #define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Matrix
{
    int rows, cols;
    int** arr;
    public:
        Matrix();
        Matrix(int, int);
        // Matrix(Matrix &);
        void Accept();
        void Display();
        ~Matrix();
};
Matrix :: ~Matrix(){
    for(int i=0;i<rows;i++){
        delete arr[i];
    }
    delete[] arr;
}
Matrix :: Matrix(){
    cout<<"Enter rows and cols: ";
    cin>>rows>>cols;
    int i, j;
    arr = new int*[rows];
    for(i =0;i<cols;i++){
        arr[i]  = new int[cols];
    }
    for(i=0;i<rows;i++){
        for(int j =0;j<cols;j++){
            arr[i][j] = 0;
        }
    }
}
Matrix :: Matrix(int rows, int cols){
    this->rows = rows;
    this->cols = cols;
}
void Matrix :: Display(){
    for(int i =0;i<rows;i++){
        for(int j =0;j<cols;j++){
            cout<<arr[i][j]<<" ";  
        }
        cout<<endl;
    }
}
void Matrix :: Accept(){
    cout<<"Rows and cols: ";
    cin>>rows;
    cin>>cols;
    cout<<"Enter elements: ";
    for(int i =0;i<rows;i++){
        for(int j =0;j<cols;j++){
            cin>>arr[i][j];
        }
    }
}

int main(){
    Matrix m1;
    Matrix m2(3,3);
    m1.Display();
    m2.Accept();
    m2.Display();
    return 0;
}

