#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;
  

    public:
    void setData(void)
    {
        cout<<"Enter the id"<<endl;
        cin>>id;
        count++;
    }
    void getData(void){
        cout<<"The id of this employee is "<<id<<" and this is employee number "<<count<<endl;
    }
     static void getCount(void){
        //cout<<id; //Throws error 
        cout<<"The value of count is "<<count<<endl;
    }
};
int Employee:: count;

int main(){
    Employee naman, aman , shivam;
    //naman.id=1;
    //naman.count=1; //cannot do this beacuse id and count are private
naman.setData();
naman.getData();
aman.setData();
aman.getData();
shivam.setData();
shivam.getData();
// Employee::getCount();

return 0;
}
