#include<iostream>
#include<iomanip>

// #include<bits/stdc++.h>   *********By including this library, we have no need to include different-different header files for using different functions
using namespace std;

int main(){
    
    // int a=34;
    
    // cout<<"The value of a is "<<a<<endl;

    // a=45;
   
    // cout<<"The value of a is "<<a<<endl;
    

    // ***************Constants******************

    // const int a=3;
    // const float a=3;
    // cout<<"The value of a is "<<a<<endl;

    // int a=454;   ******* // You will get an error because a is constant 
    // int a=45.4;
    // cout<<"The value of a is "<<a<<endl;

    // ***************Manipulators in C++******************
    
    int a=3, b=78, c=1223;
    cout<<"the value of a is "<<a<<endl;
    cout<<"the value of b is "<<b<<endl;
    cout<<"the value of c is "<<c<<endl;

    cout<<"the value of a is "<<setw(4)<<a<<endl;
    cout<<"the value of b is "<<setw(4)<<b<<endl;
    cout<<"the value of c is "<<setw(4)<<c<<endl;

    // ***************Operator Precedence and Associativity******************

    int A=3, B=4;
    // int c=(a*5)+b;
    // int c = ((((a*5)+b)-45)+87);

    int C = A*5+B-45+87;
    cout<<C;

    return 0;
}