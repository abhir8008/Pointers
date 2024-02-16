#include<iostream>
using namespace std;

int main()
{
    int x = 3;
    int* p =&x;    //pointer: we can access the value of the variable where address is in the 
    cout<<&x<<endl; //pointer using dereference operator
    cout<<p<<endl;  // only p means what is inside p i.e. address of variable
    cout<<x<<endl;
    cout<<*p<<endl; //pointer P menas what is inside the address of variable
    *p =23;         //Data stores in the address of x
    cout<<x<<endl;
}