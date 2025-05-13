//  a static variable is a special type of variable that is shared among all objects of a class, rather than having a separate copy for each object.

#include <iostream>
using namespace std;

class Employee
{
    int id;
    int static count;


    public:
     void setData(void){
        cout<<"Enter the id ";
        cin>>id;
        count++;
     }
     void getData(void){
        cout<<"The id of employee is "<<id<<" and this is the employee number "<<count<<endl;
     }
    static void getCount(void){
        cout<<"The value of the count is "<<count<<endl;

    }
};

int Employee :: count;

int main(){
    Employee naman, aman, shivam;
    //naman.id =1;  //cannot do bcz id is private
    // naman.count = 1; //cannot do bcz count is private
    naman.setData();
    naman.getData();
    aman.setData();
    aman.getData();
    shivam.setData();
    shivam.getData();
    Employee :: getCount();
    return 0;
}
