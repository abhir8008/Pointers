//Write a function which will take pointer and display the number on screen. Take number from user and print it on screen using that function.

#include<iostream>
using namespace std;

int pointerfunction(int* p)
{
    cout<<"Entered number is: "<< *p;
}

int main()
{
    int x;
    cout<< "Enter the integer: ";
    cin >> x;

    pointerfunction(&x);
}