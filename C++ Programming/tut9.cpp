#include<iostream>
using namespace std;

int main(){
    // cout<<"This is tutorial 9";
    int age;
    cout<<"Tell me your age: ";
    cin>>age;

       // **************Selection control structure :- if-else***********

    // if ((age<18) && (age>0))
    // {
    //     cout<<"You cannot come to my party"<<endl;
    // }
    // else if(age==18){
    //     cout<<"You are a kid and you will get a kid pass to the party."<<endl;
    // }
    // else if(age<1){
    //     cout<<"you are not yet born";
    // }
    // else{
    //     cout<<"You can come to the party"<<endl;
    // }

    // **************Selection control structure :- Switch Case***************

    switch (age)
    {
    case 18:
        cout<<"You are 18";
        break;
    case 22:
        cout<<"You are 22";
        break;
    case 2:
        cout<<"You are 2";
        break;
    
    default:
    cout<<"No special cases"<<endl;
        break;
    }

    cout<<"Done with switch case.";

    return 0;
}