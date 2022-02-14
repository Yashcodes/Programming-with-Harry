#include<iostream>
using namespace std;

// int factorial(int n){
//     if(n<2){
//         return 1;
//     }
//     return n * factorial(n-1);
// }
// int main(){
//     int a;
//     cout<<"Enter the number to calculate factorial"<<endl;
//     cin>>a;

//     cout<<"The factorial of "<<a<<" is "<<factorial(a)<<endl;
//     return 0;
// }



// Fibonacci series using recursion

int fib(int n){
    if(n<2){
        return 1;
    }
    return fib(n-1) + fib(n-2);
}

int main(){
    int a;

    cout<<"Enter the number: "<<endl;
    cin>>a;
    cout<<"The value at position "<<a<<" is "<<fib(a)<<endl;
}