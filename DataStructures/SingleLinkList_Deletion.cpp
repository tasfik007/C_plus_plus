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

    void deleteFirst()
    {
        node* temp=head;
        head=head->ptr;
        delete temp;
    }
    void deleteLast()
    {
        node*temp=head;
        while(temp->ptr->ptr!=NULL)
            temp=temp->ptr;
        temp->ptr=NULL;
        delete temp;
    }
    void deleteAny(int pos)
    {
        if(head==NULL)return;
        else if(pos==0)deleteFirst();
        else
        {
            node* temp=head;
            int i=0;
            while(i<pos-1)
            {
                temp=temp->ptr;
                i++;
            }
               temp->ptr=temp->ptr->ptr;
               delete temp;
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
    p:
    cout<<"\nEnter your choice : "<<endl<<"1.deleteFirst\n2.deleteLast\n3.deleteAny\n";
    cin>>flag;
    if(flag!=1 && flag!=2 && flag!=3)
    {
        cout<<"INVALID CHOICE\n";
        cout<<"Press Enter to try again";
        getchar();getchar();
        system("cls");
        goto p;
    }
    else if(flag==1)
    {
        l1.deleteFirst();
    }
     else if(flag==2)
    {
        l1.deleteLast();
    }
    else if(flag==3)
    {
        cout<<"Enter the position: ";
        cin>>a;
        l1.deleteAny(a);
    }
    l1.displayList();

}
