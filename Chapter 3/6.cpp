/*Write a program that asks the user for the speed of a
vehicle (in miles per hour) and how many hours it has
traveled. It should then use a loop to display the total
distance traveled at the end of each hour of that time
period.*/
#include <iostream>
using namespace std;
int main()
{
  int hours, speed, distance = 0,hoursTravel;
  cout << "Enter the speed miles per houre :";
  cin >> speed;
  cout << " Enter the how many hours traveled :";
  cin >> hours;
  
  for ( int i = 1; i<=hours;i++)
  {
    distance = speed * i;
    cout << "  hours :" << i << "  distance :" << distance;
  }
}
