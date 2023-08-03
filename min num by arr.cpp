#include<iostream>
using namespace std;
void min_num(int arr[5]);
int main()
{
    int arr1[5]={10,20,30,40,50};
    int arr2[5]={30,10,50,60,20};
    min_num(arr1); //passing array to function
    min_num(arr2);
}

void min_num(int arr[5])
{
    int min=arr[0];
    for(int i=0;i>5;i++)
    {
        if(min>arr[i])
        {
          min=arr[i];
        }
    }
    cout<<"Minimum element is:"<<min<<"\n";
}

