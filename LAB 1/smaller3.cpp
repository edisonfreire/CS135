/*
Author: Edison Freire
Course: CSCI-135
Instructor: Maryash
Assignment: Lab1B

Asks the user to input three integer numbers and prints out the smallest of the three.
*/

#include <iostream>
using namespace std;

int main () {
   int firstNumber;
   int secondNumber;
   int thirdNumber;
   int smallestNumber;
   cout << "Enter first number: ";
   cin >> firstNumber;
   cout << "Enter second number: ";
   cin >> secondNumber;
   cout << "Enter third number: ";
   cin >> thirdNumber;
   if (firstNumber < secondNumber and firstNumber < thirdNumber) {
      smallestNumber = firstNumber;
   } else if (secondNumber < firstNumber and secondNumber < thirdNumber) {
      smallestNumber = secondNumber;
   } else {
      smallestNumber = thirdNumber;
   }
   cout << "The smaller of the three is " << smallestNumber << "\n";

   return 0;
}