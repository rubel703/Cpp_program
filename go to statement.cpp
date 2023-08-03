#include <iostream>
#include<conio.h>
using namespace std;
int main()
{
system:
    cout<<"\nYou are not eligible to vote!\n";
    cout<<"Enter your age:";
    int age;
    cin>>age;
    if (age < 18)
    {
        goto system;
    }
    else
    {
        cout<<"\nYou are eligible to vote!";
    }
    getch();
}
