#include <iostream>
using namespace std;

// class value{
//     int a;
//     public:
//     void setData(int x){
//         a=x;
//     }
//     friend void display(value val);                                     //****************FRIEND FUNCTION***************
// };

// void display(value val){
//     cout<<"The value of a is "<<val.a<<endl;
// }

// int main(){
//     value val;
//     val.setData(2);
//     display(val);

//     return 0;
// }

class value
{
    int a;

public:
    void setData();
    friend void display(class value val);
};

void value::setData()
{
    cout << "Enter the value of a: " << endl;
    cin >> a;
}
void display(class value val)
{
    cout << "The value of a is " << val.a << endl;
}

int main()
{
    value va;
    va.setData();
    display(va);

    return 0;
}