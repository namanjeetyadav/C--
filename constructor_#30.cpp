#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int, int); // Declaration of constructor

    void printNumber()
    {

        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(int x, int y)
{
    a = x;
    b = y;
}

int main()
{
//Implicit call
Complex a(4,5);

// Explicit call                //Creates a object than copy data to b
Complex b = Complex(5,7);



a.printNumber();
b.printNumber();

return 0;

}
