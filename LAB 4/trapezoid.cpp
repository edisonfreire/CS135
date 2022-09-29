/*
Author: Edison Freire
Course: CSCI-135
Instructor: Maryash
Assignment: Lab4F

Write a program trapezoid.cpp that prints an upside-down trapezoid of given width and height.

However, if the input height is impossibly large for the given width, then the program should report, Impossible shape!
*/

#include <iostream>
using namespace std;

int main()
{
  int height, width;
  cout << "Input height: ";
  cin >> height;

  cout << "Input width: ";
  cin >> width;

  if (width / 2 < height)
  {
    cout << "Impossible\n";
    return 0;
  }

  int stars = width;
  int spaces = 0;
  for (int row = 1; row <= height; row++)
  {
    for (int col = 1; col <= spaces; col++)
    {
      cout << " ";
    }
    spaces++;

    for (int col = 1; col <= stars; col++)
    {
      cout << "*";
    }
    stars -= 2;

    cout << "\n";
  }
  return 0;
}