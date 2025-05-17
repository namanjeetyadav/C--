#include <iostream>
#include <cmath>
using namespace std;

class Point
{
    friend void pointDistance(Point, Point);
    int x, y;

public:
    Point(int a, int b)
    {

        x = a;
        y = b;
    }

    void displayPoint()
    {
        cout << "The point is " << x << "," << y << endl;
    }
};

void pointDistance(Point o1, Point o2)
{
    double dis = sqrt(pow(o1.x - o2.x, 2) + pow(o1.y - o2.y, 2));

    cout << "The distance between points: " << dis << endl;
};

int main()
{
    Point p(1, 1);
    p.displayPoint();

    Point q(4, 6);
    q.displayPoint();

    pointDistance(p, q);
    return 0;
};