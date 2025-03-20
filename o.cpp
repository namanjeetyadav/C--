#include <iostream>
using namespace std;

int c = 45; //This is a global variable
float s = 5.5f; //use f to tell that this is a float value 
// otherwise after passing this value it is treated as double

long double h = 5.223l;

int main()
{
    int a, b, c;
    cout<<"Enter the value of a "<<endl;
    cin>>a;
    cout<<"Enter the value of b "<<endl;
    cin>>b;
    c=a+b;
    cout<<"Sum is "<<c;

    return 0;
}