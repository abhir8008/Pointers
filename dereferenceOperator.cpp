#include<iostream>
using namespace std;

int main()
{
    int x =10;
    int* ptr = &x;
    cout<< x << endl;
    cout << *ptr<< endl;
    cout << ptr<< endl;
    *ptr = 23;      //x=23
    cout << x<< endl;
}