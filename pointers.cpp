#include <iostream>

using namespace std;


int a;
int* b;
int** c;

int main(){
 a =5;
 b = &a; 
 c= &b;
 cout<<"The address of b is "<<b<<endl;
 cout<<"The address of b is "<<*c<<endl;

 cout<<"The value of b "<<*b<<endl;
 cout<<"The value of (value of c) "<<**c<<endl;   
}