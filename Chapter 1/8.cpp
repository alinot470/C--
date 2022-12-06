#include <iostream>
using namespace std;
main()
{
  int Lenght_in_feet;
  cout << "Lenght in feet?\n";
  cin >> Lenght_in_feet;
  int Width_in_feet;
  cout << "Width_in_feet? \n";
  cin >> Width_in_feet;
  int Square_feet;
  Square_feet = Lenght_in_feet * Width_in_feet;
  cout << "You Garden size is : " << Square_feet << " Square Feet \n";

  int Cost_of_soil;
  cout << "Enter cost of soil per feet?\n";
  cin >> Cost_of_soil;
  int Cost_of_flowerSeeds;
  cout << "cost of flower seeds per feet ? \n";
  cin >> Cost_of_flowerSeeds;
  int Cost_of_fence;
  cout << "cost of fence per feet? \n";
  cin >> Cost_of_fence;
  int Total_amount;
  Total_amount = Cost_of_soil + Cost_of_flowerSeeds + Cost_of_fence;
  cout << "Total amount is: " << Total_amount * Square_feet;
}