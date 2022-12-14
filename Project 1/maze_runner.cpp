/*
Author: Edison Freire
Course: CSCI-135
Instructor: Maryash
Assignment: Project 1 task 2
*/

#include <iostream>
using namespace std;

int main() {
  char dir;
  int row = 0, col = 1;
  int maze[6][6] = {
      1, 0, 1, 1, 1, 1, //
      1, 0, 0, 0, 1, 1, //
      1, 0, 1, 0, 0, 1, //
      1, 0, 1, 0, 1, 1, //
      1, 0, 0, 0, 0, 0, //
      1, 1, 1, 1, 1, 1, //
  };
  while (cin >> dir) {
    if (dir == 'R' && maze[row][col + 1] == 0) {
      col += 1;
    } else if (dir == 'L' && maze[row][col - 1] == 0) {
      col -= 1;
    } else if (dir == 'U' && maze[row - 1][col] == 0) {
      row -= 1;
    } else if (dir == 'D' && maze[row + 1][col] == 0) {
      row += 1;
    }
    if (row == 4 && col == 5) {
      cout << "You got out of the maze.";
    } else {
      cout << "You got stuck in the maze.";
    }
    return 0;
  }