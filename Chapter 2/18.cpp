/*Movie theaters often make more money on food and drink
sales than they do on ticket sales. One particular theater
charges $10 for tickets to evening shows and just $3 for
kiddie matinees. They have discovered that the average
evening patron spends $6.50 on concessions and the
average matinee patron spends $8.50 on concessions.
Write a program that computes and displays what percent
of evening show income and what percent of matinee show
income comes from ticket sales and what percent comes
from concession stand purchases.*/

// Under Working

#include <iostream>
using namespace std; 
int main ()
{
  float evining=10, eveningincome, matinee=3,matineeincome, percentevening,percentmatinee,eviningconcession=6.50,matineeconcession=8.50,tickets,matineetikets;
  cout << "Enter tikets evening show :";
  cin >> tickets;
  cout << "Enter kiddie matinees tikets :";
  cin >> matineetikets;
  eveningincome = tickets * evining;
  matineeincome = matineetikets * matinee;

  percentevening = tickets / eveningincome * 100;
  cout << "percent of evening show income :"<<percentevening<< endl;
  percentmatinee =  matineetikets / matineeincome  * 100;
  cout << "percent of matinee show income :"<< percentmatinee<< endl;

  eveningincome = tickets * eviningconcession;
  matineeincome = matineetikets * matineeconcession;

  percentevening =  tickets / eveningincome * 100 ;
  cout << "percent of evening show income from concession :" << percentevening << endl;
  percentmatinee = matineetikets / matineeincome * 100 ;
  cout << "percent of matinee show income from concession :" << percentmatinee << endl;
}
