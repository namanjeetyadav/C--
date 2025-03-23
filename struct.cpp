#include <iostream>
#include <string>
using namespace std;

struct employee
{
    int salary;
    int roll_number;
    string name;
};
// typedef struct employee  //Also written as this typedef used to rename
// {
//     int salary;
//     int roll_number;
//     string name;
// } emp;

int main()
{
    struct employee e1;
    struct employee e2;
    // emp e3;  // Using typedef aslo create like this
    e1.name = "Naman";
    e1.roll_number = 12;
    e1.salary = 100000000;
    e2.name = "Harsh";
    e2.roll_number = 11;
    e2.salary = 10000;

    cout << e1.name<<endl;
    cout << e1.salary<<endl;
    cout << e2.salary<<endl;
    return 0;
}