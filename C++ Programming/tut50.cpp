#include <iostream>
using namespace std;

int main()
{
    // Basic Example of pointer
    int a = 4;
    int *ptr = &a;
    // cout<<"The value of a is "<<a<<endl;
    // cout<<"The address of a is "<<&a<<endl;
    // cout<<"The address of a is "<<ptr<<endl;
    cout<<"The value of a is "<<*ptr<<endl;


    // new operator

    // int *p= new int (40);
    float *p= new float (40.78);
    cout<<"The value at address p is "<<*p<<endl;


    int *arr  = new int [3];         // also use float
    arr[0]  = 10;
    arr[1]  = 11;
    arr[2]  = 12;

    // delete arr;          // delete any data member    
    // delete[] arr;          // delete any block of allocated memory    

    cout <<"The value of arr[0] is "<<arr[0]<<endl;
    cout <<"The value of arr[1] is "<<arr[1]<<endl;
    cout <<"The value of arr[2] is "<<arr[2]<<endl;


    // delete operator

    int *b= new int (3);
    // delete b;
    cout<<"The value of b is "<<*b<<endl;
    return 0;
}