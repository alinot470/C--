/*Write a program that calculates the average monthly rainfall
for three months. The program should ask the user to enter
the name of each month, such as June or July, and the
amount of rain (in inches) that fell that month. The program
should display a message similar to the following:
The average monthly rainfall for June, July, and August was
6.72 inches ? */
#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
  string month_1,month_2,month_3;
  float averagemon,mon1,mon2,mon3,average;
  cout << "enter the name of month  1 :";
  cin >> month_1;
  cout << "Enter the rain in this month  " << month_1 << " : " << endl;
  cin>> mon1;

  cout << "enter the name of month 2 ";
  cin >> month_2;
  cout << "Enter the rain in this month  " << month_2 << " : " << endl;
  cin >> mon2;

  cout << "enter the name of month 3 :";
  cin >> month_3;
  cout << "Enter the rain in this month  " << month_3 << " : " << endl;
  cin >> mon3;

  averagemon = mon1 + mon2 +mon3;
  average = averagemon/3;
  cout << setprecision(2) <<fixed;
  cout <<"The average monthly rainfall for " << month_1 << " , " << month_2 << " and " << month_3 <<  " was " << average <<  " inches ";
}

