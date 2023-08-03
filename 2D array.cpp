#include<iostream>
using namespace std;
int main()
{
    /* int arr[3][3];
     arr[0][0]=10;
     arr[0][1]=20;
     arr[0][2]=30;
     arr[1][0]=40;
     arr[1][1]=50;
     arr[1][2]=60;
     arr[2][0]=70;
     arr[2][1]=80;
     arr[2][2]=90; */

    int arr[3][3] = {{10,20,30},{40,50,60},{70,80,90}};

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
