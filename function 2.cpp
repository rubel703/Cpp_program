#include<iostream>
using namespace std;
int sum(int a, int b)
{
    int c=a+b;
    return c;
}
int main()
{
    int x,y;
    cout<<"enter first number:";
    cin>>x;
    cout<<"enter second number:";
    cin>>y;
    cout<<"Sum of these two number:"<<sum(x,y);
    return 0;
}
