#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter the value of a and b" << endl;
    cin >> a >> b;

    cout << "Value of a and b before interchanging the values are " << a << " and " << b << " respectively\n"
         << endl;

    c = a;
    a = b;
    b = c;

    cout << "Value of a and b after interchanging the values are " << a << " and " << b << " respectively\n"
         << endl;

    return 0;
}