/*Assuming the level of the Earth’s oceans continues rising at
about 3.1 millimeters per year, write a program that
displays a table showing the cumulative (i.e., total) number
of millimeters the oceans will have risen each year for the
next 25 years*/
#include <iostream>
using namespace std;
int main ()
{
  float mpy = 3.1;
  float sum ;
  for ( int i = 1 ; i <= 25 ; i++)
  {
    
    cout  << mpy++ << endl;
    sum += mpy;
    
  }
  cout << sum;
}