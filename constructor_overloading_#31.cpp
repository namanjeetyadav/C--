#include <iostream>
using namespace std;

class Complex
{

    int a, b;

public:
    Complex()
    {
        a = 0;
        b = 0;
    }
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }
    Complex(int x)
    {
        a = x;
        b = 0;
    }

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{

    Complex o1(3, 4);
    o1.printNumber();
    Complex o2(5);
    o2.printNumber();
    Complex o3;
    o3.printNumber();
    return 0;
}