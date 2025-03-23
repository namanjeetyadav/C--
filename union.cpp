#include <iostream>
using namespace std;

union money
{
    int inr;
    int usd;
    int btc;
    char car;
    char grade;
    char first_alpha;
    char last_alpha;
};


int main(){
union money day1;
day1.btc = 1;
day1.inr =100;
day1.car = 'A';
day1.grade = '1';
day1.first_alpha = '3';
day1.last_alpha = 'Z';



cout<<day1.car<<endl;
cout<<day1.grade<<endl;
cout<<day1.first_alpha<<endl;
cout<<day1.last_alpha<<endl;
    return 0;
}

// The output will be Z this union only return one value