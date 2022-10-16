/*
Author: Edison Freire
Course: CSCI-135
Instructor: Maryash
Assignment: Lab4B

Write a program checkerboard.cpp that asks the user to input width and height
and prints a rectangular checkerboard of the requested size using asterisks and
spaces (alternating).
*/

#include <iostream>
using namespace std;

int main() {
  int height, width;
  cout << "Input width: ";
  cin >> width;
  cout << "Input height: ";
  cin >> height;
  cout << "Shape:\n";
  for (int i = 1; i <= height; i++) {
    for (int j = 1; j <= width; j++) {
      if ((i + j) % 2 == 0) {
        cout << "*";
      } else {
        cout << " ";
      }
    }
    cout << "\n";
  }
}