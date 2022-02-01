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
        cout << "The point is (" << x << ", " << y << ")" << endl;
    }

    void setPoint(point o1, point){
        x=o2.x-o1.x;
        y=o2.y-o1.y;
    }
};

// point displayPoint(point o1, point o2)
// {
//     point o3;
//     o3.point((o2.x - o1.x), (o2.y - o1.y));
//     return o3;
// }

int main()
{
    point p(2, 3);
    p.display();

    point q(3, 4);
    q.display();

    point distance;
    distance.setPoint(p, q);
    distance.display();

    return 0;
}