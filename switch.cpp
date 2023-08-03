#include<iostream>
using namespace std;
int main ()
{
    int num;
    cout<<"Enter your number:";
    cin>>num;

    switch(num)
    {
    case 'num>=0&&num<33':
        cout<<"Failed";
        break;
    case 'num>=33&&num<=60':
        cout<<"A-";
        break;
    case 'num>=61&&num<=79':
        cout<<"A";
        break;
    case 'num>=80&&num<=100':
        cout<<"A+";
        break;
    default:
        cout<<"No number";
    }
}
