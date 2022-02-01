#include <iostream>
using namespace std;

class point
{
    int x, y;

public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }

    void display()
    {
        cout << "The point is (" << x<<", "<<y<<")"<<endl;
    }
};

 int main()
{
    point p(2,4);
    p.display();

    point q(3,5);
    q.display();
    return 0;
}