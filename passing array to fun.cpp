#include<iostream>
using namespace std;
void printArray(int arr[5]);
int main()
{
    int arr1[5]={10,20,30,40,50};
    int arr2[5]={60,70,80,90,100};
    printArray(arr1);
    printArray(arr2);
}
void printArray(int arr[5])
{
    cout<<"Print the Array elements:"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<"\n";
    }
}

