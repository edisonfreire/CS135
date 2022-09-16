/*
Author: Edison Freire
Course: CSCI-135
Instructor: Maryash
Assignment: Lab1A

Asks the user to input two integer numbers and prints out the smaller of the two.
*/

#include <iostream>
using namespace std;

int main () {
   int firstNumber;
   int secondNumber;
   int smallestNumber;
   cout << "Enter the first number: ";
   cin >> firstNumber;
   cout << "Enter the second number: ";
   cin >> secondNumber;
   if (firstNumber < secondNumber){
      smallestNumber = firstNumber;
   } else if (secondNumber < firstNumber){
      smallestNumber = secondNumber;
   }
   cout << "The smaller of the two is " << smallestNumber << "\n";

   return 0;
}