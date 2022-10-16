/*
Author: Edison Freire
Course: CSCI-135
Instructor: Maryash
Assignment: E3.5

Write a program that reads three numbers and prints 'increasing' if they are in
increasing order, 'decreasing' if they are in decreasing order, and 'neither'
otherwise. Here, 'increasing' means 'strictly increasing', with each value
larger than its predecessor. The sequence 3 4 4 would not be considered
increasing.
*/

#include <iostream>
using namespace std;

int main() {
  int nums[3];

  for (int i = 0; i < 3; i++) {
    cin >> nums[i];
  }

  int integerOne = nums[0];
  int integerTwo = nums[1];
  int integerThree = nums[2];

  if (integerTwo > integerOne and integerThree > integerTwo) {
    cout << "increasing";
  } else if (integerOne > integerTwo and integerTwo > integerThree) {
    cout << "decreasing";
  } else {
    cout << "neither";
  }

  return 0;
}