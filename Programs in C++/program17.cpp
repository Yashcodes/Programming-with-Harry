#include<iostream>
using namespace std;

int main(){
    float a=1, s=1, n;

    cout<<"Enter the number of terms of the series: ";
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        a=a*i;
        s=s+1/a;
    }
    
    cout<<"The sum of the first "<<n<<" terms of the series is "<<s;
    return 0;
}