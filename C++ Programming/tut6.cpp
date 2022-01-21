// There are two types of header files 
// 1. System header files: It comes with the compiler 
#include<iostream>

// 2. User-defined header files: It is written by the programmer
// #include<this .h>  This will produce an error if this.h is not present in the current directory

using namespace std;

int main()
{
    int a=4, b=5;
    cout<<"This is hello world program\n";
    cout<<"Operators in C++\n";
    cout<<"Following are the types of operators in C++:-\n";
    
    // Arithmetic operators

    cout<<"The value of a+b is "<<a+b<<endl;
    cout<<"The value of a-b is "<<a-b<<endl;
    cout<<"The value of a*b is "<<a*b<<endl;
    cout<<"The value of a/b is "<<a/b<<endl;
    cout<<"The value of a%b is "<<a%b<<endl;
    cout<<"The value of a++ is "<<a++<<endl;
    cout<<"The value of a-- is "<<a--<<endl;
    cout<<"The value of ++a is "<<++a<<endl;
    cout<<"The value of --a is "<<--a<<endl;
    cout<<endl<<endl;
    // Assignment operator :- these used to assign values to variables
    // int a=3, b=8;
    // char d='d';

    // Comparison operatorṣ
    cout<<"The following are the types of Comparison Operators in  C++:-"<<endl<<endl;
    cout<<"The value of a==b is "<<(a==b)<<endl;
    cout<<"The value of a!=b is "<<(a!=b)<<endl;
    cout<<"The value of a>=b is "<<(a>=b)<<endl;
    cout<<"The value of a<=b is "<<(a<=b)<<endl;
    cout<<"The value of a>b is "<<(a>b)<<endl;
    cout<<"The value of a<b is "<<(a<b)<<endl;
    cout<<endl<<endl;


    // Logical operatorṣ
    cout<<"The following are the types of Logical Operators in C++:-"<<endl<<endl;
    cout<<"The value of this logical AND operator ((a==b)&&(a<b)) is "<<((a==b)&&(a<b))<<endl;  //Logical "AND" Operator
    cout<<"The value of this logical OR operator ((a==b)||(a<b)) is "<<((a==b)||(a<b))<<endl;  //Logical "OR" Operator
    cout<<"The value of this logical NOT operator (!(a==b)) is "<<(!(a==b))<<endl;
    
    return 0;
}
