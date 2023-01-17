/*Write a program that asks the user to enter their monthly
costs for each of the following housing-related expenses:
rent or mortgage payment
phones
Internet service utilities
cable
The program should then display the total monthly cost of
these expenses and the total annual cost of these expenses?*/
#include <iostream>
using namespace std;
int main ()
{
  int rent_or_mortgage_payment, phones, Internet_service_utilities, cable,total_mothly_cost,total_annual_cost;
  cout << "Enter your monthly costs foreach of following :rent or mortgage payment : phones: Internet service utilities : cable \n";
  cout << "Enter  rent or mortgage payment :";
  cin>>rent_or_mortgage_payment;
  cout << "Enter  phones bill :";
  cin >> phones;
  cout << "Enter  Internet service utilities :";
  cin >> Internet_service_utilities;
  cout << "Enter  cable bill :";
  cin >> cable;
  total_mothly_cost = rent_or_mortgage_payment + phones + Internet_service_utilities + cable;
  cout<<"Total monthly cost :"<<total_mothly_cost<<endl;
  total_annual_cost = total_mothly_cost * 12;
  cout<<"Total annual cost :"<< total_annual_cost << endl;

}