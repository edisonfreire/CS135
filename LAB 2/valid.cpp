/*
Author: Edison Freire
Course: CSCI-135
Instructor: Maryash
Assignment: Lab2A

Write a program, which asks the user to input an integer in the range 0 < n <
100. If the number is out of range, the program should keep asking to re-enter
until a valid number is input. After a valid value is obtained, print this
number n squared.
*/

#include <iostream>
using namespace std;

int main() {
  int input;
  cout << "Please enter an integer: ";
  cin >> input;
  while (input >= 100 || input <= 0) {
    cout << "Please re-enter: ";
    cin >> input;
  }

  int inputSquared = input * input;
  cout << "Number squared is " << inputSquared << "\n";

  return 0;
}