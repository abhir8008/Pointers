#include<iostream>
using namespace std;

int main()
{
    int x=3;
    cout<<&x<<endl;  //address changes every time you run the code
    int* p=&x;
    cout<<p<<endl;  // address of x
    cout<<*p<<endl; // value at this address
    cout<<&p<<endl; //address of p itself
}