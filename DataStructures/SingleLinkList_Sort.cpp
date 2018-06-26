#include<bits/stdc++.h>
using namespace std;
struct node
{
    int value;
    node* ptr;
};
class List
{
    node* head=NULL;
    node* tail=NULL;
public:

    void insertLast(int x)
    {
        node* temp;
        temp=new node;
        temp->value=x;
        temp->ptr=NULL;
        if(head==NULL)
        {
            head=temp;
            tail=temp;
        }
        else
        {
            tail->ptr=temp;
            tail=temp;
        }
    }

   void sortList()
       {
           for(node*t1=head;t1!=NULL;t1=t1->ptr)
           {
                   for(node*t2=head;t2!=NULL;t2=t2->ptr)
               {
                   if(t1->value < t2->value)swap(t1->value,t2->value);
               }
           }
       }

    void displayList()
    {
        node* temp=head;
        cout<<"The elements are       : ";
        while(temp!=NULL)
        {
            cout<<temp->value<<" ";
            temp=temp->ptr;
        }
    }
};
int main()
{
    List l1;
    int i=0,n,a,flag=0;
    cout<<"How many elements do u want to insert ?"<<endl;
    cin>>a;
    cout<<"Enter the elements     : ";
    while(i<a)
    {
        cin>>n;
        l1.insertLast(n);
        i++;
    }
    l1.displayList();
    l1.sortList();
    cout<<endl;
    l1.displayList();

}

