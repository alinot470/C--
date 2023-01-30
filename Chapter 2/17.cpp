// Write a program that prompts the users to enter the number
// of days they plan to spend on theirmin next vacation.Then
// compute and report how long that is in hours,
// in minutes,and in seconds.
#include <iostream>
using namespace std;
int main ()
{
  int number,hours,minutes, second;
  cout << "Enter number of Days :";
  cin >> number;
  hours = number * 24;
  minutes = hours * 60;
  second = minutes * 60;
  cout << "hours :" << hours <<endl;
  cout << "minutes :" << minutes << endl;
  cout << "second :" << second ;
}