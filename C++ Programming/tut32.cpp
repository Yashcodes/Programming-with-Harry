#include <iostream>
using namespace std;

class simple
{
    int data1, data2, data3;

public:
    simple(int a, int b = 8, int c = 9)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }

    void printData();
};

void simple::printData()
{
    cout << "The value of data1, data2 and data3 is " << data1 << ", " << data2 << " and " << data3 << " respectively" << endl;
}
int main()
{
    simple s(10,4);
    s.printData();
    return 0;
}