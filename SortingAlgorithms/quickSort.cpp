#include<iostream>
using namespace std;

int partitionList(int arr[],int low,int high)
{
    int pivot=arr[high];
    int i=low-1;
    for( int j=low;j<high;j++)
    {
        if(arr[j]<=pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    return i+1;
}

void quickSort(int arr[],int low,int high)
{
    if(low<high)
    {
        int pi=partitionList(arr,low,high);
        quickSort(arr,low,pi-1);
        quickSort(arr,pi+1,high);
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
    int arr[]={1,4,2,5,3,6,8,7};
    int arrSize=sizeof(arr)/sizeof(arr[0]);
    cout<<"The List is        : ";
    printList(arr,arrSize);
    quickSort(arr,0,arrSize-1);
    cout<<"The sorted List is : ";
    printList(arr,arrSize);
}
