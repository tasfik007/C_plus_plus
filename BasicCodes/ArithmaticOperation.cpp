#include<iostream>
using namespace std;
int main()
{
  int number1;
  int number2;
  
  cout<<"Enter two numbers for operation: "<<endl;
  cin>>number1>>number2;
  
    int sum = number1+number2;
    int sub = number1-number2;
    int mul = number1*number2;
  float div = number1/number2;
  
  cout<<"sum = "<<sum<<endl;
  cout<<"sub = "<<sub<<endl;
  cout<<"mul = "<<mul<<endl;
  cout<<"div = "<<div<<endl;
  
  return 0;
}
