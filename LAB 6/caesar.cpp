/*
Author: Edison Freire
Course: CSCI-135
Instructor: Maryash
Assignment: Lab6B


Write a program caesar.cpp with functions implementing Caesar cipher encryption:

// A helper function to shift one character by rshift
char shiftChar(char c, int rshift);

// Caesar cipher encryption
string encryptCaesar(string plaintext, int rshift);

The argument rshift is the magnitude of the right shift. For the sake of the
lab, you may assume it to be in the range 0 ≤ rshift ≤ 25 (although,
implementing it correctly for an arbitrary integer shift is also possible, of
course).
*/

#include <iostream>
using namespace std;

char shiftChar(char c, int rshift) {
  if (c >= 'a' && c <= 'z') {
    if (c + rshift > 'z') {
      c = c - 26 + rshift;
    } else {
      c = c + rshift;
    }
  } else if (c >= 'A' && c <= 'Z') {
    if (c + rshift > 'Z') {
      c = c - 26 + rshift;
    } else {
      c = c + rshift;
    }
  }
  return c;
}

string encryptCaesar(string plaintext, int rshift) {
  string shifted;
  for (int i = 0; i < plaintext.size(); i++) {
    shifted += shiftChar(plaintext[i], rshift);
  }
  return shifted;
}

int main() {
  string text;
  int shift;
  cout << "Enter plaintext: ";
  getline(cin, text);
  cout << "Enter shift: ";
  cin >> shift;
  cout << "Ciphertext: " << encryptCaesar(text, shift);
}