#include<iostream>
#include<queue>
using namespace std;

void displayQueue(queue <int> s2)
{
       while(s2.empty()!=true)
       {
           cout<<s2.front()<<" ";
           s2.pop();
       }
}
int main()
{
    queue <int> s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.pop();
    //cout<<"Top element: "<<s1.top();
    displayQueue(s1);// pass by reference
    cout<<endl<<s1.front();


}

