/*The formula to compute the area of a circle is
so if a circle’s radius doubles (i.e., is multiplied by 2), the
circle’s area will be four times as large as before. Write a
program that creates a table showing the radius and area
for a circle whose radius begins with 1 and continues
doubling until it is 8. Use 3.14 for PI.*/
#include <iostream>
using namespace std;
int main ()
{
  float pi = 3.1415;
  int radious ;
  for ( radious = 1 ; radious <=8 ; radious++ )
  {
    cout << "area : " << pi * (radious * radious) << endl;
  }
}