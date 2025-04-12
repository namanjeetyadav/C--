#include <iostream>
using namespace std;

class Complex
{

    int a;
    int b;

public:
    void setNumber(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    friend Complex sumComplex(Complex o1, Complex o2);

    void printNumber()
    {
        cout << "Your complex number is " << a << " + " << b << "i" << endl;
    }
};

Complex sumComplex(Complex o1, Complex o2)
{

    Complex o3;

    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{

    Complex c1, c2, sum;
    c1.setNumber(4,3);
    c1.printNumber();

    c2.setNumber(1,2);
    c2.printNumber();

    sum = sumComplex(c1,c2);
    sum.printNumber();
    return 0;
}