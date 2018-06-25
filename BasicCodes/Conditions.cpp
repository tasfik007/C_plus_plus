//finding the biggest element among three numbers
#include<iostream>
using namespace std;
int main()
{
    int num1,num2,num3;

    cout<<"Enter the three numbers: ";
    cin>>num1>>num2>>num3;

    if(num1>num2)
    {
        if(num1>num3)
        {
            cout<<num1<<" is the biggest number";
        }
        else cout<<num3<<" is the biggest number";
    }

    else if(num2>num3)
    {
        cout<<num2<<" is the biggest number";
    }
    else
    {
       cout<<num3<<" is the biggest number";
    }
}
