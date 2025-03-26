#include <iostream>
using namespace std;

// Call by value
// void swap(int a, int b){
//  int temp = a;
//  a = b;
//  b = temp;
// }

// Call by reference
void swapPointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Call by reference using C++ reference Variable
void swapReferenceVar(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

// Function returning a reference
int &swapReferenceFun(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{

    int x, y;
    cout << "Enter the first number ";
    cin >> x;
    cout << "Enter the second number ";
    cin >> y;

    cout << "Before swapping x is " << x << " and y is " << y << endl;
    // swap(x,y);
    // swapPointer(&x, &y); // use &x and &y bcz otherwise x and y will give the value not memory address
    swapReferenceVar(x, y);
    cout << "After swapping x is " << x << " and y is " << y;

    return 0;
}