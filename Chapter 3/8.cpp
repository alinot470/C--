/*Write a program that displays a table of speeds in
kilometers per hour (kph) with their values converted to
miles per hour (mph). The table should display the speeds
from 40 kilometers per hour through 120 kilometers per
hour, in increments of 10 kilometers per hour. In other
words, it should display 40 kph, 50 kph, 60 kph and so forth,
up through 120 kph.
mph = kph*0.6214*/   
#include <iostream>
using namespace std;
int main()
{
  int mph,kph = 40,end = 120 ;
  mph = kph * 0.6214;
  for ( int i = 1 ; kph < end ; kph += 10)
  {
    
    cout << kph << "KpH "<<endl ;
    
  }
}
