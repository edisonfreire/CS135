/*
Author: Edison Freire
Course: CSCI-135
Instructor: Maryash
Assignment: Lab2C

Write a program that creates an array of 10 integers, and provides the user with
an interface to edit any of its elements.
*/

#include <iostream>
using namespace std;

int main() {
  int myData[10]; // defines an array of 10 integers
  for (int i = 0; i < 10; i++) {
    myData[i] = 1;
  } // this loop fills the array with ones

  int i; // i independent from the ones in the loops
  int v;
  do {
    for (int i = 0; i < 10; i++) {
      cout << myData[i] << " ";
    } // prints out all the integers in myData seperated by a space
    cout << "\n";
    cout << "Input index: ";
    cin >> i;
    cout << "Input value: ";
    cin >> v;
    if (i >= 0 && i < 10) { // if the inputted index is in range, the array is
      myData[i] = v;        // updated at index i
    }
  } while (i >= 0 && i < 10); // repeats until inputted index is out of range

  cout << "Index out of range. Exit.\n";
  return 0;
}

//
//