/*Write a program that asks the user for the number of males
and number of females registered in a class. The program
should then compute and report what percentage of the
students are males and what percentage are females.
Convert the decimal result of each calculation to percent
form and display it with two decimal points. The two values
should add up to 100.00 percent? */

#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
  float males, females, cls,mp,fp;
  cout << "Enter males in class :";
  cin >> males;
  cout << "Enter females in class :";
  cin >> females;
  cls = males + females;
  mp = males/cls*100;
  fp= females/cls*100;
  cout << setprecision(2)<<fixed;
  cout << mp << ": " << fp ;
  


}