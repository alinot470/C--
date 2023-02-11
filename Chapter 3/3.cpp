#include <iostream>
using namespace std;
int main ()
{
  int ch,r,num1,num2;
  cout << "Enter num1 :";
  cin >> num1;
  cout << "Enter num2 :";
  cin >> num2;
  do
  {
    cout<<"\n 1.calculate the sum\n";
    cout << "\n 2.calculate the sub\n";
    cout << "\n 3.calculate the mul\n";
    cout << "\n 4.calculate the div\n";
    cout << "\n 5.exit\n";
    cout << "enter ch:";
    cin>>ch;
    
    switch (ch)
    {
    case (1):
      {
      
      cout <<"Sum =" <<num1+num2;}
      break;
      case (2):
      {
      cout << "Sub =" << num1 - num2;
      }
      
      break;
      case (3):
      {cout <<"Mul =" <<num1 * num2;
      }
      break;
      case (4):
      {
      cout << "Div =" << num1 / num2;
      }
      
      break;
      case (5):
      {
      cout << "Thank you" ;
      }

      break;

      default:
      cout<<"invalid input ";
      break;
    }
  } while (ch!=5);
  
} 