//pointers printing the address and value.

#include<iostream>
using namespace std;
int main()
{
    int num=30;
    int *p;
    p=&num;
    cout<<"address of number variable:"<<&num<<endl;
    cout<<"address of p:"<<p<<endl;
    cout<<"value of p variable:"<<num;
}
