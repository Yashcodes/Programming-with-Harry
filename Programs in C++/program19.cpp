#include <iostream>
using namespace std;

class value
{
    int x;

public:
    inline void setData();
    friend void displayData(value disp)
    {
        cout << "The value of x is " << disp.x << endl;
    }
};

inline void value::setData()
{
    cout << "Enter the value of x: " << endl;
    cin >> x;
}

int main()
{
    value val;
    val.setData();
    displayData(val);
    return 0;
}