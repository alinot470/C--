/*1. Miles per Gallon
    Write a program that calculates a car’s gas mileage.The
        program should ask the user to enter the number of gallons
            of gas the car can hold and the number of miles it can be
                driven on a full tank.It should then calculate and display the
                    number of miles per gallon the car gets?*/
#include <iostream>
using namespace std;
int main ()
{
  float numbers_of_gallons,full_tank,miles_pe_gallon;
  cout<<"Enter the numbers of gallons car can :";
  cin>>numbers_of_gallons;
  cout << "Car drive on full tank :";
  cin >> full_tank;
  miles_pe_gallon = full_tank / numbers_of_gallons;
  cout<<miles_pe_gallon;
}

