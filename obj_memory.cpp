#include <iostream>
using namespace std;

class shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
};

void shop::setPrice(void)
{
    cout << "Enter id of your item no " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter the price of your item" << endl;
    cin >> itemPrice[counter];
    counter++;
}

void shop::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item with ID " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{

    shop dukkan;
    dukkan.initCounter();
    dukkan.setPrice();
    dukkan.setPrice();
    dukkan.setPrice();
    dukkan.displayPrice();

    return 0;
};