#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter your obtain number: ";
    cin>>n;
    if(n<0||n>100)
    {
        cout<<"wrong number";
    }
    else if(n>=0&&n<33)
    {
        cout<<"Failed";
    }
    else if(n>=33&&n<=49)
    {
        cout<<"Your Grade:D";
    }
    else if(n>=50&&n<=59)
    {
        cout<<"Your Grade:C";
    }
    else if(n>=60&&n<=69)
    {
        cout<<"Your Grade:B";
    }
    else if(n>=70&&n<=79)
    {
        cout<<"Your Grade:A";
    }
    else if(n>=80&&n<=100)
    {
        cout<<"Your Grade:A+";
    }
}
