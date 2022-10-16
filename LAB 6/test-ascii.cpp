/*
Author: Edison Freire
Course: CSCI-135
Instructor: Maryash
Assignment: Lab6A


Write a program test-ascii.cpp that asks the user to input a line of text (which
may possibly include spaces). The program should report all characters from the
input line together with their ASCII codes.

Make sure to print exactly one space between the character and it’s code.
*/

#include <iostream>
using namespace std;

int main() {
  string s;
  cout << "Input: ";
  getline(cin, s);
  for (int i = 0; i < s.length(); i++) {
    cout << s[i] << " " << (int)s[i] << "\n";
  }
}