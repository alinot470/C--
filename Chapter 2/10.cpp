/*There are three seating categories at a stadium. For a
softball game, Class A seats cost $15, Class B seats cost
$12, and Class C seats cost $9. Write a program that asks
how many tickets for each class of seats were sold, then
displays the amount of income generated from ticket sales.
Format your dollar amount in a fixed-point notation with two
decimal points and make sure the decimal point is always
displayed?*/
#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
  float class_a, class_b, class_c, incoum, class_a_incoum, class_b_incoum, class_c_incoum;

  cout << "Class A seats cost $15 :\n Class B seats cost $12 : \n Class C seats cost $9  : \n" ;
  cout<< "Enter Class A seats :";
  cin>>class_a;
  cout << "Enter Class B seats :";
  cin >> class_b;
  cout << "Enter Class C seats :";
  cin >> class_c;
  class_a_incoum = class_a * 15;
  class_b_incoum = class_b * 12;
  class_c_incoum = class_c * 9;
  incoum = class_a_incoum + class_b_incoum + class_c_incoum;
  cout<<fixed;
  cout<<"incoum :"<<setprecision(2)<<incoum;

}