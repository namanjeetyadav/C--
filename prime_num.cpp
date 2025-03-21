#include <iostream>
#include <cmath>

using namespace std;

// int i, num;

// int main()
// {
//     cin >> num;

// if(num==2 || num==3){
//     cout<<"This is prime number";
// }

// else{

    
//     for (i = 3; i <= num - 1; i++)
//     {
//         if (num % i == 0)
//         {
//             break;
//             cout << num << " Is not the prime number";
//         }
//         i++;
        
//     }
    
// }
// return 0;
// }

int main(){


int num = 39;
for (int i = 2; i <= sqrt(num); i++) {
    cout << "Checking divisor: " << i << endl;
    if (num % i == 0) {
        cout << num << " is not a prime number.";
        return 0;
    }
}
cout << num << " is a prime number.";

return 0;
}
