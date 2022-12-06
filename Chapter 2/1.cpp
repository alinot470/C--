#include <iostream>
using namespace std;

main ()
{
   int x;
   cout << "Enter two digit number :";
   cin  >> x;
   
   int tens_place, once_place;
   tens_place = x / 10;
   once_place = x % 10;
   cout << tens_place << endl << once_place ;
   }