#include<iostream>
using namespace std;

                // ****************FIBONACCI SERIES*******************
int main(){
    int n, a=0, b=1, c;

    cout<<"Enter the number to print series:";
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        c = a+b;
        cout<<c<<" ";
        
        a = b;
        b = c;                                                                 //  1,2,3,5,8,13
    }
    
    return 0;
}