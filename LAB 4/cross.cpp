/*
Author: Edison Freire
Course: CSCI-135
Instructor: Maryash
Assignment: Lab4C

Write a program cross.cpp that asks the user to input the shape size, and prints
a diagonal cross of that dimension.
*/

#include <iostream>
using namespace std;

int main() {
  int size;
  cout << "Input size: ";
  cin >> size;
  cout << "Shape:\n";
  for (int i = 1; i <= size; i++) {
    for (int j = 1; j <= size; j++) {
      if (j == i || j == (size + 1 - i)) {
        cout << "*";
      } else {
        cout << " ";
      }
    }
    cout << "\n";
  }
}