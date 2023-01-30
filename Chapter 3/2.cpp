/*Write a program that asks the user to enter a number within
the range of 1 through 10. Use a switch statement to
display the Roman numeral version of that number.
Input Validation: Decide how the program should handle an
input that is less than 1 or greater than 10*/
#include <iostream>
using namespace std;
int main ()
{
  int num;
  cout << "Enter the num with in range 1 to 10 :";
  cin >> num;
  switch (num)
  {
  case (1):
    {cout << "i";}
    break;
  case (2):
    {
      cout << "ii";
    }
    break;
  case (3):
    {
      cout << "iii";
    }
    break;
  case (4):
    {
      cout << "iv";
    }
    break;
  case (5):
    {
      cout << "v";
    }
    break;
  case (6):
    {
      cout << "vi";
    }
    break;
  case (7):
    {
      cout << "vii";
    }
    break;
  case (8):
    {
      cout << "viii";
    }
    break;
  case (9):
    {
      cout << "ix";
    }
    break;
    case (10):
    {
      cout << "x";
    }
    break;
    default:
    {
      cout << "Enter the right input";}
    break;
  }

}