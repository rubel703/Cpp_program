#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5; j++)
        {
            cout<<i<<" "<<j<<"\n";
        }
    }
}
/*C++ Nested For Loop
In C++, we can use for loop inside another for loop,
it is known as nested for loop. The inner loop is executed fully when
outer loop is executed one time. So if outer loop and inner loop are executed
4 times, inner loop will be executed 4 times for each outer loop i.e. total
16 times.*/



