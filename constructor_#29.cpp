#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(void); // Constrcutor declaration

    void printNumber(void)
    {
        cout << "Your number is " << a << " + " << b << "i"<<endl;
    }
};

Complex ::Complex()
{
    a = 10;
    b = 5;
};

int main()
{

    Complex c1, c2, c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();

    return 0;
}