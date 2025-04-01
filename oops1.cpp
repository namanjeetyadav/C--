#include <iostream>
using namespace std;

class Employee
{
private:
int a, b, c;
public:
int d, e;
void setData(int a1, int b1, int c1);
void getData(){
cout<<"The vale of a is "<<a<<endl;
cout<<"The vale of b is "<<b<<endl;
cout<<"The vale of c is "<<c<<endl;
cout<<"The vale of d is "<<d<<endl;
cout<<"The vale of e is "<<e<<endl;

}

};


void Employee :: setData(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}

int main(){
    Employee naman;
    naman.d = 55;
    naman.e = 11;
    naman.setData(1,2,3);
    naman.getData();

    return 0;
}