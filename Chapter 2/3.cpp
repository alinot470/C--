/*Write a program which accept temperature in Fahrenheit and print it in Centigrade?*/
#include <iostream>
using namespace std;
int main()
{
  float f,c;
  cout<<"Enter Temp in Fahrenheit :";
  cin>>f;
  c = 5*(f-32)/9;
  cout<<"Temp in Centigrade :" <<c;


}
