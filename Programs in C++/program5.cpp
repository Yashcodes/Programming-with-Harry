#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter the value of a and b:" << endl;
    cin >> a >> b;

    cout << "Value of a and b before interchanging the values are " << a << " and " << b << " respectively\n"
         << endl;

    a = a + b; // a = 3+5 = 8 --> a+b
    b = a - b; // b = 8-5 = 3 --> a-b
    a = a - b; // a = 8-3 = 5 --> a-b

    cout << "Value of a and b after interchanging the values are " << a << " and " << b << " respectively" << endl; // b = 8-5 =3 -->a-b

    return 0;
}