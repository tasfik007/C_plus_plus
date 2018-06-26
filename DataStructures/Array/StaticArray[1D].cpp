#include<iostream>
using namespace std;
int main()
{
    int arr[10];

    cout<<"Enter the array elements: ";
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    cout<<"The array elements are  : ";
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
}
