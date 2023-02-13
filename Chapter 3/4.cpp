/*Write a program that uses a loop to display the characters
for each ASCII code 32 through 127. Display 16 characters
on each line with one space between characters.*/
#include <iostream>
using namespace std;

int main ()
{

  for ( char i = 32; i <49;i++)
  {
    cout << i << " " ;
    
  }
  cout << endl;
  for (char i = 49; i < 66; i++)
  {
    cout << i << " ";
  }
  cout << endl;
  for (char i = 66; i < 83; i++)
  {
    cout << i << " ";
  }
  cout << endl;
  for (char i = 83; i < 100; i++)
  {
    cout << i << " ";
  }
  cout << endl;
  for (char i = 100; i < 117; i++)
  {
    cout << i << " ";
  }
  cout << endl;
  for (char i = 117; i < 127; i++)
  {
    cout << i << " ";
  }
}
