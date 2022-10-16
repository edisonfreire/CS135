/*
Author: Edison Freire
Course: CSCI-135
Instructor: Maryash
Assignment: Lab4D

Write a program lower.cpp that prints the bottom-left half of a square, given
the side length.
*/

#include <iostream>
using namespace std;

int main() {
  int sideLength;
  cout << "Input side length: ";
  cin >> sideLength;
  cout << "Shape:\n";
  for (int i = 1; i <= sideLength; i++) {
    for (int j = 1; j <= i; j++) {
      cout << "*";
    }
    cout << "\n";
  }
}