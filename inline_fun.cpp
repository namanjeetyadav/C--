#include <iostream>
using namespace std;


inline int product(int a, int b)
{
    // Using static variable inside inline function is not recommended, 
    // static int c = 0; 
    // c = c + 1;
    // return a * b *c;
    return a * b;
}


// Default value in a function

float moneyReceived(int currentMoney, float factor=1.04){
return currentMoney*factor;
}

int main()
{
    // int a;
    // int b;
    // cout << "Enter value of a and b ";
    // cin >> a >> b;
    // cout << "Product of a and b " << product(a, b) << endl;
    // cout << "Product of a and b " << product(a, b) << endl;
    // cout << "Product of a and b " << product(a, b) << endl;
    // cout << "Product of a and b " << product(a, b) << endl;
    // cout << "Product of a and b " << product(a, b) << endl;
    // cout << "Product of a and b " << product(a, b) << endl;
    // cout << "Product of a and b " << product(a, b) << endl;
    // cout << "Product of a and b " << product(a, b) << endl;

    int money =1000;
    // Here we are not giving the second argument while calling the function
    cout<<"If you have "<<money<<"you will recive "<<moneyReceived(money)<<endl;
    cout<<"If you have "<<money<<"you will recive "<<moneyReceived(money, 1.1)<<endl;


    return 0;
}