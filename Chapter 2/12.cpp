// Many financial experts advise property owners to insure
// their homes or buildings for at least 80 percent of the
// amount it would cost to replace the structure. Write a
// program that asks the user to enter the replacement cost of
// a building and then displays the minimum amount of
// insurance that should be purchased for the property?
#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
  float replacement_cost , insurance_percent = .80 , minimum_amount_property;
  cout << "Enter the replacment cost :";
  cin>> replacement_cost;
  minimum_amount_property = replacement_cost * insurance_percent;
  cout << setprecision(3) << fixed;
  cout << minimum_amount_property;

  

}