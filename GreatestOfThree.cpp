// Write a program to find out the greatest and the smallest among three numbers using pointers.


// Return is not required inpointers

// You're correct; we don't need to use return statements when working with pointers in this context. 
//Instead, we simply update the values through the pointers.

#include <iostream>
using namespace std;

int comparision(int *a, int *b, int *c, int *g, int *s)
{
    if (*a > *b && *a > *c)
    {
        *g = *a;
        //return *g;
    }

    else if (*b > *a && *b > *c)
    {
        *g = *b;
        //return *g;
    }

    else
    {
        *g = *c;
        //return *g;
    }





    if (*a < *b && *a < *c)
    {
        *s = *a;
        //return *s;
    }

    else if (*b < *a && *b < *c)
    {
        *s = *b;
        //return *s;
    }

    else
    {
        *s = *c;
        //return *s;
    }
}

int main()
{
    int a, b, c;
    int g = 0 ;
    int s = 0;

    cout << "Enter the 3 numbers: " << endl;
    cin >> a >> b >> c;

    comparision(&a, &b, &c, &g, &s);

    cout<< " Greatest "<< g<<endl;
    cout<< " Smallest "<< s<<endl;
}