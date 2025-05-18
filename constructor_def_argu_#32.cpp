#include <iostream>
using namespace std;

class Simple
{
    int data1;
    int data2;
    int data3;

public:
    Simple(int a, int b = 10, int c = 13)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    };

    void printData();
};

void Simple ::printData()
{

    cout << "The value of data1, data2 and data3 is " << data1 << ", " << data2 << " and " << data3<<endl;
}

int main()
{

    Simple obj1(1); // Take by default the value of b = 10 and c = 13
    obj1.printData();
    Simple obj2(1, 2); // Take by default the value c = 13
    obj2.printData();
    return 0;
};