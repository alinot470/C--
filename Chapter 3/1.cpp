/*Write a program that asks the user to enter two different
integers. The program should use the conditional operator
to determine which number is the smaller and which is the
larger*/
#include <iostream>
using namespace std;
int main ()
{
  int num1,num2;
  cout << "Enter the number 1 :";
  cin >> num1;
  cout << "Enter the number 2 :";
  cin >> num2;
  if (num1 > num2)
  {cout << "Number 1 is grater ";}
  else
  {cout << "Number 2 is grater";}
  
}