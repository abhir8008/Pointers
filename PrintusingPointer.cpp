// Write a program to print a number which is entered from keyboard using pointer.

#include<iostream>
using namespace std;

int main()
{
    int x;
    int* p = &x;

    cout<< " enter the value: ";
    cin >> x;

    cout<<"The entered value is: "<< *(&x)<<endl;
}