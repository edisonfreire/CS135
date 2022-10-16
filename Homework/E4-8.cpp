/*
Author: Edison Freire
Course: CSCI-135
Instructor: Maryash
Assignment: E4.8

Write a program that reads a word and prints each character of the word on a
separate line. For example, if the user provides the input "Harry", the program
prints:   H   a   r   r   y
*/

#include <iostream>
using namespace std;

int main() {
  string word;
  cin >> word;
  for (int i = 0; i < word.length(); i++) {
    cout << word.substr(i, 1) << "\n";
  }
  return 0;
}