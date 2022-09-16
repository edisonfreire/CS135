/*
Author: Edison Freire
Course: CSCI-135
Instructor: Maryash
Assignment: E1.7

Write a program that asks the user for three items, such as the names of your three best friends or favorite movies, and prints them on three separate lines.
*/

#include <iostream>
using namespace std;

int main() {
   string itemOne;
   string itemTwo;
   string itemThree;
   cout << "Enter your three favorite colors: ";
   cin >> itemOne >> itemTwo >> itemThree;
   cout << itemOne << "\n" << itemTwo << "\n" << itemThree << "\n";

   return 0;
}