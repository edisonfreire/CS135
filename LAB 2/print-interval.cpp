/*
Author: Edison Freire
Course: CSCI-135
Instructor: Maryash
Assignment: Lab2B

Write a program that asks the user to input two integers L and U (representing
the lower and upper limits of the interval), and print out all integers in the
range L ≤ i < U separated by spaces. Notice that we include the lower limit, but
exclude the upper limit.
*/

#include <iostream>
using namespace std;

int main() {
  int lowerLimit;
  int upperLimit;
  cout << "Please enter L: ";
  cin >> lowerLimit;
  cout << "Please enter U: ";
  cin >> upperLimit;
  for (int i = lowerLimit; i < upperLimit; i++) {
    cout << i << " ";
  }

  return 0;
}
