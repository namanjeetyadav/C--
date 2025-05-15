#include <iostream>
using namespace std;

class Complex
{

    int a;
    int b;

public:
    void setData(int v1, int v2)
    {
        a = v1; //Real part of number
        b = v2; //Imaginary part of number
    }

    void setDataBySum(Complex o1, Complex o2, Complex o4)
    {
        a = o1.a + o2.a + o4.a;
        b = o1.b + o2.b + o4.b;
    }
    void printNumber()
    {
        cout << "Your complex number is " << a << " + " <<b<<"i"<< endl;
    }
};

int main()
{
    Complex c1, c2, c3, c4;
    c1.setData(1,2);
    c1.printNumber();

    c2.setData(3,4);
    c2.printNumber();

    c4.setData(5,6);
    c4.printNumber();

    c3.setDataBySum(c1,c2,c4);
    c3.printNumber();
    


    return 0;

}


// #include <iostream>
// using namespace std;

// class Complex
// {

// int a;
// int b;

// public:
// void setData(int v1, int v2){
//     a = v1;
//     b = v2;
// }

// void setDataSum(Complex o1, Complex o2){
// a = o1.a + o2.a;
// b = o1.b + o2.b;
// }

// void printNumber(){
//     cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;

// }
// };

// int main(){
//     Complex c1, c2,c3;
//     c1.setData(1,2);
//     c1.printNumber();
//     c2.setData(3, 4);
//     c2.printNumber();
//     c3.setDataSum(c1,c2);
//     c3.printNumber();
//     return 0;

// }
