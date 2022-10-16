/*
Author: Edison Freire
Course: CSCI-135
Instructor: Maryash
Assignment: Lab4A

Write a program box.cpp that asks the user to input width and height and prints
a solid rectangular box of the requested size using asterisks.

Also, print a line Shape: between user input and the printed shape (to separate
input from output).
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
      cout << "*";
    }
    cout << "\n";
  }
}