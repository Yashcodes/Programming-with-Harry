#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    //creating a constructor
    // Constructor is a special member function with the same name as of the class.
    // It is used to initialize the objects of its class.
    // It is automatically invoked whenever an object is created.

    complex(void); //Constructor declaration
    void printNumber()
    {
        cout << "Your complex number is " << a << " + " << b << "i";
    }
};

complex ::complex(void)            // This is a default constructor as it accepts no parameter.
{
    a = 10;
    b = 20;
    cout<<"Hello world!"<<endl;
}
int main()
{
    complex c;
    c.printNumber();

    return 0;
}

/* Characteristics of constructors

1. It should be declared in the public section of the class.
2. They are automatically invoked when the object is created.
3. They cannot return values and donot have return types.
4. It can have default arguments.
5. We cannot refer to their address.

*/