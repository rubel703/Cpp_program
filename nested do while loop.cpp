#include<iostream>
using namespace std;
int main()
{
    int i=1;
    do{
        int j=1;
        do{
            cout<<i<<" "<<j<<"\n";
            j++;
        }
        while(j<=5);
        i++;
    }
    while(i<=5);
}

