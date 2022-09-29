/*
Author: Edison Freire
Course: CSCI-135
Instructor: Maryash
Assignment: Lab4G

Write a program checkerboard3x3.cpp that asks the user to input width and height and prints a checkerboard of 3-by-3 squares. (It should work even if the input dimensions are not a multiple of three.)
*/

#include <iostream>
using namespace std;

int main()
{
  int width, height;
  cin >> width;
  //
  cin >> height;
  //
  char row_start = '*';
  char col_shape = '*';
  //
  for (int row = 1; row <= height; row++)
  {
    col_shape = row_start;
    for (int col = 1; col <= width; col++)
    {
      cout << col_shape;
      if (col % 3 == 0)
      {
        if (col_shape == '*')
        {
          col_shape = ' ';
        }
        else
        {
          col_shape = '*';
        }
      }
    }
    if (row % 3 == 0)
    {
      if (row_start == '*')
      {
        row_start = ' ';
      }
      else
      {
        row_start = '*';
      }
    }
    cout << '\n';
  }
}
//
//
//