#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 122;
        cout << "Enter the id of employee" << endl;
        cin >> id;
    }
    void getId()
    {
        cout << "The id of this employee is " << id << endl;
    }
};

int main()
{
    Employee arr_of_obj[4];
    for (int i = 0; i < 4; i++)
    { 
        arr_of_obj[i].setId();
        arr_of_obj[i].getId();
    }
    return 0;
}