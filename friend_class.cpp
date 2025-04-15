#include <iostream>
using namespace std;

class Complex;

class Calculator
{

private:
public:

int add(int a, int b){
    return (a+b);
}

    int sumRealComplex(Complex, Complex);
    int sumCompComplex(Complex, Complex);
};

class Complex
{

private:
    int a;
    int b;

    // // Individually declaring functions as friends
    // friend int Calculator ::sumRealComplex(Complex, Complex);
    // friend int Calculator ::sumCompComplex(Complex, Complex);
    
    // Making whole class friend not only a function    
    friend class Calculator;
    
public:
    void setNumber(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void printNumber()
    {

        cout << "Your complex number is " << a << " + " << b << "i" << endl;
    }
};

int Calculator ::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

int Calculator ::sumCompComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{

    Complex o1, o2;
    o1.setNumber(1, 2);
    o2.setNumber(3, 4);

    Calculator calc;
    int res = calc.sumRealComplex(o1, o2);
    cout << "The sum of real part of o1 and o2 is " << res << endl;
    int resc = calc.sumCompComplex(o1, o2);
    cout << "The sum of complex part of o1 and o2 is " << resc << endl;
    return 0;
}