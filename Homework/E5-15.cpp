/*
Author: Edison Freire
Course: CSCI-135
Instructor: Maryash
Assignment: E5.15

Write a function   sort3(int& a, int& b, int& c)   that swaps its three
arguments to arrange them in sorted order.   For example: int v = 3; int w = 4;
int x = 1;   s
ort3(v, w, x);   //v is now 1, w is now 3, x is now 4
//   Hint: Use multiple calls to the sort2 function of Exercise E5.14.
*/

#include <iostream>
using namespace std;

void sort2(int &a, int &b) {
  int temp = a;
  if (a > b) {
    a = b;
    b = temp;
  } // nothing after because its unchanged under any other condition, < or =.
}

void sort3(int &a, int &b, int &c) {
  sort2(a, c);
  sort2(b, c);
  sort2(a, b);
  cout << a << " " << b << " " << c << "\n";
}

int main() {
  // test
  int a, b, c;
  cin >> a >> b >> c;
  sort3(a, b, c);
  return 0;
}