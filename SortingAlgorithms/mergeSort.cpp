#include<iostream>
using namespace std;
void mergeList(int arr[],int l,int m,int r)
{
    int n1=m-l+1;
    int n2=r-m;

    int L[n1],R[n2];
    for(int i=0;i<n1;i++)
    {
        L[i]=arr[l+i];
    }
    for(int j=0;j<n2;j++)
    {
        R[j]=arr[m+1+j];
    }
    int i=0,j=0,k=l;
    while(i<n1&&j<n2)
    {
        if(L[i]<=R[j])
        {
            arr[k]=L[i];
            i++;
        }
        else
        {
            arr[k]=R[j];
            j++;
        }
        k++;
    }

    while(i<n1)
    {
        arr[k]=L[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        arr[k]=R[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[],int l,int r)
{
    if(l<r)
    {
        int m=(l+r)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        mergeList(arr,l,m,r);
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
    mergeSort(arr,0,arrSize-1);
    cout<<"The sorted List is : ";
    printList(arr,arrSize);
}
