// Write a program to find a baseball player’s batting average.The program should ask the user to enter the number of
// times the player was at bat and the number of hits earned.Display the batting average as a decimal between .000 and
// 1.000. For example,
//if a player bats 40 times and gets 10 hits, which is 25 % of the time, their batting average would be .250.
#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
  float number_of_bats, number_of_hits, average ;
  cout <<"Enter the number of you bat :";
  cin >> number_of_bats;
  cout << "Enter the number of you hits :";
  cin >> number_of_hits;
  average = number_of_hits/number_of_bats*100;
  cout << setprecision(3)<< fixed;
  cout << average;
}