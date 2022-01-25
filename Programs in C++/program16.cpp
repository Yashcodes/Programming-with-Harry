#include<iostream>
using namespace std;

int main(){
    int s=1, n, a=1, x;

    cout<<"Enter the number of terms: ";
    cin>>n;

    cout<<"Enter the value of x: ";
    cin>>x;

    for (int i = 0; i < n; i++)
    {
        a=a*x;
        s=s+a;
    }
    
    cout<<"The sum of the number of terms in series is: "<<s;
    return 0;
}