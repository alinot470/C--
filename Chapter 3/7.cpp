/*Programming Challenges you
were asked to write a program that converts a Celsius
temperature to Fahrenheit. Modify that program so it uses a
loop to display a table of the Celsius temperatures from 0 to
30 and their Fahrenheit equivalents.
F = 9/5C + 32*/
#include <iostream>
using namespace std;
int main ()
{
  float f=0,c=0;
  for ( int i = 0 ; i < 30; i++  )
  {
    c = i;
    f = (9*c)/5 + 32;
    cout << f<< endl;
  }
}