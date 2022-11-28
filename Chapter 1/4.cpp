#include <iostream>
using namespace std;

int main()
{
  int candy_bars, price_of_bar , total_amount;
  cout << " Enter the numbers of candy bars sold in the organization in one day?";
  cin >> candy_bars;
  cout << " Price of Each bar?";
  cin >> price_of_bar;
  total_amount = candy_bars * price_of_bar;
  cout << "You earend " << total_amount << " in one day  ";


  return 0;



}