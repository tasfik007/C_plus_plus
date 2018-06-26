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
    void insertFirst(int x)
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
            temp->ptr=head;
            head=temp;
        }
    }
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

    void insertAny(int pos)
    {
        int x;
        cout<<"\nEnter the value: ";
        cin>>x;

        if(pos==0)insertFirst(x);
        else
        {
        node* temp;
        node*t1=head;
        temp=new node;
        temp->value=x;
        temp->ptr=NULL;
        int i=0;
        while(i<pos-1)
        {
            t1=t1->ptr;
            i++;
        }
        temp->ptr=t1->ptr;
        t1->ptr=temp;
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
    p:
    cout<<"Enter your choice : "<<endl<<"1.insertFirst\n2.insertLast\n";
    cin>>flag;
    if(flag!=1 && flag!=2)
    {
        cout<<"INVALID CHOICE\n";
        cout<<"Press Enter to try again";
        getchar();getchar();
        system("cls");
        goto p;
    }

    cout<<"How many elements do u want to insert ?"<<endl;
    cin>>a;
    cout<<"Enter the elements     : ";
    while(i<a)
    {
        cin>>n;
        if(flag==1)
            l1.insertFirst(n);
        else if(flag==2)
            l1.insertLast(n);

        i++;
    }
    l1.displayList();
    cout<<"\nEnter your desired position: ";
    cin>>a;
    l1.insertAny(a);
    l1.displayList();
}
