// Write a program to print the address of a variable whose value is input from user.

#include<iostream>
using namespace std;

int main()
{
    int x;
    cout<< " enter hte number: ";
    cin >> x;
    cout<< "Address of "<< x << " is " << &x<< endl;

    int* p = &x;
    cout<< "The address of "<< p << " is "<< &p<<endl;

    cout<<" The value at address "<< p <<" is "<< *p<<endl;



    return 0;

}