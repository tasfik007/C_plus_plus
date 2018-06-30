#include<iostream>
using namespace std;
void bubbleSort(int arr[],int arrSize)
{
    for(int i=0;i<arrSize;i++)
    {
        for(int j=0;j<arrSize-1;j++)
        {
            if(arr[j]>arr[j+1])swap(arr[j],arr[j+1]);
        }
    }
}
void printList(int arr[],int arrSize)
{
    for(int i=0;i<arrSize;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[]={1,3,2,5,4};
    printList(arr,5);
    bubbleSort(arr,5);
    printList(arr,5);

}
