/*
Author: Edison Freire
Course: CSCI-135
Instructor: Maryash
Assignment: Lab1C

Asks the user to input an integer representing a year number. If the input year is a leap year according to the modern Gregorian calendar, it should print "Leap year", otherwise, print "Common year"
*/

#include <iostream>
using namespace std;

int main () {
   int inputYear;

   cout << "Enter year: ";
   cin >> inputYear;

   if (inputYear % 4 != 0) {
      cout << "Common year\n";
   } else if (inputYear % 100 != 0) {
      cout << "Leap year\n";
   } else if (inputYear % 400 != 0) {
      cout << "Common year\n";
   } else {
      cout << "Leap year\n";
   }

   return 0;
}