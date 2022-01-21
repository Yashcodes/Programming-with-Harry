#include<iostream>
using namespace std;

int main(){
    
    // What is a pointer? -----> Data type which holds the address of other data types

    int a = 3;
    int *b = &a;
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b;

    return 0;
}