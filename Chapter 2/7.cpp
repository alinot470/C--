/*Fakhar’s basic salary is input through the keyboard.His dearness allowance is 40 % of basicsalary,and house rent allowance is 20 % of basic salary.Write a program to calculate his gross salary?*/
#include <iostream>
using namespace std;
int main()
{
  int salary,dearness,basic_salary,house_rent,gross_salary;
  cout<<"Enter you'r salary :";
  cin>> salary;
  dearness = salary * 40 / 100;
  cout<<dearness<<endl;
  basic_salary = salary * 20 / 100;
  cout<<basic_salary<<endl;
  house_rent = salary * 20 / 100;
  cout << house_rent << endl;
  gross_salary = salary + dearness + basic_salary + house_rent;
  cout<<gross_salary<<endl;

}