#include<iostream>
using namespace std;
void swap(int *x, int *y){
    int swap;
    swap=*x;
    *x=*y;
    *y=swap;  //call by reference
}
int main()
{
    int x=500,y=1000;
    swap(&x,&y);
    cout<<"value of x is:"<<x;
    cout<<"\n value of y is:"<<y;
}
