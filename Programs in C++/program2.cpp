#include<iostream>
using namespace std;

int main(){
    int r;
    float pi=3.14;

    cout<<"Enter the value of radius: "<<endl;
    cin>>r;

    float area = pi*r*r;
    cout<<"The area of circle is "<<area<<endl;

    float circumference = 2*pi*r;
    cout<<"The circumference of circle is "<<circumference<<endl;
    return 0;
}