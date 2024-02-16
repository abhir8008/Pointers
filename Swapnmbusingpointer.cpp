#include<iostream>
using namespace std;

void swap(int* a , int* b)  //int* a = &x, int*b = &y
{
  int temp= *a;
  *a = *b;
  *b = temp; 
    //return (*a,*b); // void doesnot requires return
}


int main()
{
    int x=5;
    //int* px=&x;
    int y=7;
    //int* py=&y;
    //cout<< *px<<endl;
    cout<<x<<" "<<y<<endl;
    swap(&x,&y);
    cout<<x<<" "<<y<<endl;
}