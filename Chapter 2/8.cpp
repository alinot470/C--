/*The length &breadth of a rectangle and radius of a circle are input through the keyboard.Write a program to calculate the area &perimeter of the rectangle, and the area &circumference of the circle?*/
#include <iostream>
using namespace std;
int main()
{
  float length,breadth,perimeter,area,area_circle,circumference,radius,pay;
  pay = 3.1415;
  //rectangle
  cout<<"Enter length of rectangle :";
  cin>>length;
  cout << "Enter breadth of rectangle :";
  cin>>breadth;
  area = length * breadth;
  cout<<"Area of rectangle is :"<<area<<endl;
  perimeter = 2 * (length + breadth);
  cout << "Perimeter of rectangle is :" << perimeter<<endl;

  //cricle
  cout << "Enter radious of cricle :";
  cin >> radius;
  area_circle = pay * (radius * radius) ;
  cout<<"Area of circle is :"<<area_circle<<endl;
  circumference = 2 * ( pay * radius );
  cout << "Circumference of circle is :" << circumference<<endl;



}