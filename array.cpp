#include <iostream>
using namespace std;

int main()
{
    int arr[] = {44, 55, 56, 78};

    cout<<"Printing array elements using while loop"<<endl;
    int i = 0;
    while (i<4)
    {
      cout<<arr[i]<<endl;
      i++;
    }

    cout<<"Printing array elements using do while loop"<<endl;
    int k=0;
    do
    {
        cout << arr[k] << endl;
        k++;
    } while (k < 4);



    return 0;
}


