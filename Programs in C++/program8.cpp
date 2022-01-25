#include<iostream>
using namespace std;

int main(){
    int i, n;

    cout<<"Enter the value of n:"<<endl;
    cin>>n;

    cout<<"Series of Even number is\n";

    for (int i = 1; i <= n; i++)
    {
        if ((i%2)==0)
        {
            cout<<i<<' ';
        }
        
    }
    
    return 0;
}