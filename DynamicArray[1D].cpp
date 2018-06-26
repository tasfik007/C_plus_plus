#include<iostream>
using namespace std;
int main()
{
    int rowSize,colSize;
    cout<<"Enter the row size of your array :";
    cin>>rowSize;
    cout<<"Enter the col size of your array :";
    cin>>colSize;
    int**arr=new int*[rowSize];
     for(int i=0;i<rowSize;i++)
     {
         arr[i]=new int[colSize];
     }
    cout<<"Enter the array elements: ";
    for(int i=0;i<rowSize;i++)
    {
            for(int j=0;j<colSize;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"The array elements are  : \n";
    for(int i=0;i<rowSize;i++)
    {
            for(int j=0;j<colSize;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

