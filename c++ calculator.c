#include <iostream>
#include <math.h>
using namespace std;

class calculator
{
int a;
int b;
public:
void getnum()
{
cout<<"enter a number: ";
  cin>>a;
  cout<<"enter a  num ";
  cin>>b;
}
int addition()
{
  return a+b;
}
int div()
{
  return a/b;
}
int multiply()
{
  return a*b;
 }
};




int main()
{
calculator first;
  int choice;

    do
    {
      cout<<"1. enter 1 for addition";
      cout<<"2.enter 2 for multiplication ";
      cout<<"3. enter 3 for division ";
      cout<<"5.enter 0 for quit ";
      cout<<"4. enter 4 for choice";
      cin>>choice;

      switch(choice)
        {
          case 1:
          first.getnum();
            cout<< "result: "<<first.addition();
          break;
          case 2:
          first.getnum();
            cout<<"result: "<<first.multiply();
          break;
          case 3:
          first.getnum();
            cout<<"result: "<<first.div();
          break;
          case 5:
          break;
          default:
          cout<<"error in input ";
        }
    }while(choice!=0);
    return 0;
}
