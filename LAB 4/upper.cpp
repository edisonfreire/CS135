/*
Author: Edison Freire
Course: CSCI-135
Instructor: Maryash
Assignment: Lab4E

Write a program lower.cpp that prints the bottom-left half of a square, given the side length.
*/

#include <iostream>
using namespace std;

int main()
{
  int sideLength;

  cout << "Input side length: ";
  cin >> sideLength;
  // comment
  // comment
  // comment

  cout << "Shape:\n";
  for (int row = 1; row <= sideLength; row++)
  {
    for (int col = 1; col <= row - 1; col++)
    {
      cout << " ";
    }
    for (int col = 1; col <= sideLength - row + 1; col++)
    {
      cout << "*";
    }
    cout << "\n";
  }
}

// comment
// comment
// comment