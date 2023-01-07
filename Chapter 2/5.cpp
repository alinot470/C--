// Write a program to swap the values of two variables?
#include <iostream>
using namespace std;
int main()
{
  int variable1, variable2, variable3;
  cout << "Enter first value :";
  cin >> variable1;
  cout << "Enter second value :";
  cin >> variable2;
  cout << "Before swap :" <<endl;
  cout << "you'r first value is :" << variable1 << endl;
  cout << "you'r second value is :" << variable2 << endl;
  variable3 = variable1;
  variable1 = variable2;
  variable2 = variable3;
  cout << "After swap :"<<endl;
  cout << "you'r first value is :" << variable1 << endl;
  cout << "you'r second value is :" << variable2 << endl;
}
