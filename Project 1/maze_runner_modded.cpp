/*
Author: Edison Freire
Course: CSCI-135
Instructor: Maryash
Assignment: Project 1 task 4
*/

#include <iostream>
using namespace std;

int main()
{
  // reading the 10x10 maze
  int maze[10][10];
  for (int rows = 0; rows < 10; rows++)
  {
    for (int cols = 0; cols < 10; cols++)
    {
      cin >> maze[rows][cols];
    }
  }

  // read the start and end positions
  int startrow, startcol, endrow, endcol;
  // to ignore the ; that divides the txt file
  char junk;
  cin >> startrow >> startcol >> endrow >> endcol >> junk;

  char dir;
  int row = startrow, col = startcol;
  while (cin >> dir)
  {
    if (dir == 'R' && maze[row][col + 1] == 0)
    {
      col += 1;
    }
    else if (dir == 'L' && maze[row][col - 1] == 0)
    {
      col -= 1;
    }
    else if (dir == 'U' && maze[row - 1][col] == 0)
    {
      row -= 1;
    }
    else if (dir == 'D' && maze[row + 1][col] == 0)
    {
      row += 1;
    }
    else if (dir == ';')
    {
      if (row == endrow && col == endcol)
      {
        cout << "You got out of the maze.\n";
        row = startrow;
        col = startcol;
      }
      else
      {
        cout << "You got stuck in the maze.\n";
        row = startrow;
        col = startcol;
      }
    }
  }
  return 0;
}