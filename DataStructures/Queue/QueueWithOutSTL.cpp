#include<bits/stdc++.h>
using namespace std;

class Stack
{
    int *arr;
    int top;
    int sz;
public:
    Stack(int sz)
    {
        this->sz=sz;
        top=-1;
        arr=new int[sz];
    }
    void enqueue(int x)
    {
        if(top<sz)
        {
            arr[++top]=x;
        }
        else cout<<"The queue is full\n";
    }
    void dequeue()
    {
        if(top<0)cout<<"The queue is empty\n";
        else
        {
            for(int i=0;i<top;i++)
            {
                arr[i]=arr[i+1];
            }
            top--;
        }
    }
    void displayQueue()
    {
        for(int i=0;i<=top;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
};


int main()
{
    Stack s1(10);

    while(1)
    {
    cout<<"\n1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY\n";
    int s;
    cout<<"Enter your choice: ";
    cin>>s;

    switch(s)
    {
    case 1:
        int a;
        cin>>a;
        s1.enqueue(a);
        system("cls");
        break;
    case 2:
        system("cls");
        s1.dequeue();
        break;
    case 3:
        s1.displayQueue();
        break;
    default:
        cout<<"Invalid choice";
    }
    }

}

