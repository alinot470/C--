// Write a program that asks for five test scores. The program
// should calculate the average test score and display it. The
// number displayed should be formatted in fixed-point
// notation, with one decimal point of precision
#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
  float match = 5, test_score, average;
  cout << "Enter five match test score :";
  cin >> test_score ;
  average = (test_score/match);
  cout << setprecision(1)<<fixed;
  cout << average;
  



}