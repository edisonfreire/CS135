/*
Author: Edison Freire
Course: CSCI-135
Instructor: Maryash
Assignment: Project 1 task 2
*/

#include <iostream>
using namespace std;

int main() {
  int maze[6][6] = {1, 0, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 1, 0, 0, 1,
                    1, 0, 1, 0, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1};
  char s;
  int start_row = 0, start_col = 1, end_row = 4, end_col = 5;
  int top_down = start_row, left_right = start_col;
  while (cin >> s) {
    if (s == 'R') {
      left_right += 1;
      if (maze[top_down][left_right] == 1) {
        left_right -= 1;
      }
    } else if (s == 'L') {
      left_right -= 1;
      if (maze[top_down][left_right] == 1) {
        left_right += 1;
      }
    } else if (s == 'U') {
      top_down -= 1;
      if (maze[top_down][left_right] == 1) {
        top_down += 1;
      }
    } else if (s == 'D') {
      top_down += 1;
      if (maze[top_down][left_right] == 1) {
        top_down -= 1;
      }
    }
  }
  if (top_down == end_row and left_right == end_col) {
    cout << "You got out of the maze.";
  } else {
    cout << "You got stuck in the maze.";
  }
  return 0;
}