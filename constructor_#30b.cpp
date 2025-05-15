#include <iostream>
#include <cmath>
using namespace std;

class Point
{
    friend void pointDistance();
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

void pointDistance()
{


};

int main()
{
    Point p(1, 1);
    p.displayPoint();

    Point q(4, 6);
    q.displayPoint();

    return 0;
};