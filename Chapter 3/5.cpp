/*Write a program that asks the user for a positive integer
value and that uses a loop to validate the input. The
program should then use a second loop to compute the sum
of all the integers from 1 up to the number entered. For
example, if the user enters 20, the loop will find the sum of
1 + 2 + 3 + 3 + … + 20.*/
#include <iostream>
using namespace std;
int main ()
{
  int num ,sum = 0;
  cout << "Enter the end value :";
  cin >> num;
  for (int i = 1; i <= num; i++)
  {
    cout << i << " ";
  }
  for (int i = 1 ;i <= num ; i++)
  {
     sum += i ;
  }
  cout<<sum;


}