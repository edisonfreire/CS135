/*
Author: Edison Freire
Course: CSCI-135
Instructor: Maryash
Assignment: Lab2D

Write a program, which uses an array of ints to compute and print all Fibonacci
numbers from F(0) to F(59).
*/

#include <iostream>
using namespace std;

int main() {
  int fib[60];
  fib[0] = 0;
  fib[1] = 1;

  for (int i = 2; i < 60; i++) {
    fib[i] = fib[i - 1] + fib[i - 2];
  } // index 0 and 1 are already defined so they did not need to be included in
    // the range, this loop find the rest of values from index 2 to 59

  for (int i = 0; i < 60; i++) {
    cout << fib[i] << "\n";
  } // this loop prints all the values on seperate line

  return 0;
}

// when the numbers approach two billion they start diverging from what they
// should be. They begin turning negative, this is because the maximum value for
// an integer in C++ is 2147483647.