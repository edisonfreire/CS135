/*
Author: Edison Freire
Course: CSCI-135
Instructor: Maryash
Assignment: E5.6

Write a function string middle(string str) that returns a string containing the middle character in str if the length of str is odd, or the two middle characters if the length is even.For example, middle('middle') returns 'dd'.
*/

#include <iostream>
using namespace std;

string middle(string str)
{
  int l = str.length(); // results number of characters (not 0 indexed)
  if (l % 2 == 0)
  {
    return str.substr(l / 2 - 1, 2); // substr is 0 indexed splicing
    // if u input word, l = 4, (4/2 - 1, 2) = 2-1, 2 since its 0 indexed, position 1 of word is o, then the 2 means 2 letters starting at postion 1, w0 o1 r2 d3
  }
  else
  {
    return str.substr(l / 2, 1); // odd number divided by 2 equals even because there is no remainder.
    // example: words, l=5, (5/2 = 4, 2), position 2 of words is r, w0, o1, r2, d3, s4. postion 2 is r, and the 1 means 1 letter at postion 4, so just r.
  }
}

int main()
{
  // test
  string word;
  cin >> word;
  cout << middle(word) << "\n";
  return 0;
}