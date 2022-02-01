#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(int, int); //Constructor declaration
    void printNumber()
    {
        cout << "Your complex number is " << a << " + " << b << "i" << endl;
    }
};

complex::complex(int x, int y) // This is a parameterized constructor as it takes two parameters here;
{
    a = x;
    b = y;
}
int main()
{
    // Implicit call;
    complex a(5, 5);

    // Explicit call;
    complex b = complex(10, 10);

    a.printNumber();
    b.printNumber();
    return 0;
}