#include <iostream>
using namespace std;

class value
{
    int x;

public:
    inline void setData();
    friend void display(class value);
};

inline void value ::setData()
{
    cout << "Enter the value of x: " << endl;
    cin >> x;
}

inline void display(class value disp)
{
    cout << "The value of x is " << disp.x << endl;
}
int main()
{
    value val;
    val.setData();
    display(val);
    return 0;
}
