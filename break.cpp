#include<iostream>
using namespace std;
int main()
{
    int x,y;
    for(x=1;x<=5;x++){
        for(y=1;y<=5;y++){
            if(x==3&&y==3){
                break;
            }
            cout<<x<<" "<<y<<"\n";
        }
    }
    /*for(int i=1; i<=3; i++)
    {
        for(int j=1; j<=3; j++)
        {
            if(i==2&&j==2)
            {
                break;
            }
            cout<<i<<" "<<j<<"\n";
        }
    }*/
}
