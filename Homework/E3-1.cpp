/*
Author: Edison Freire
Course: CSCI-135
Instructor: Maryash
Assignment: E3.1

Write a program that reads an integer and prints whether it is negative, zero, or positive.
*/

#include <iostream>
using namespace std;

int main() {
   int integer;
   cout << "Enter an integer: ";
   cin >> integer;
   if (integer > 0) {
      cout << "Positive\n";
   } else if (integer < 0) {
      cout << "Negative\n";
   } else {
      cout << "Zero\n";
   }
   return 0;
}