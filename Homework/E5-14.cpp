/*
Author: Edison Freire
Course: CSCI-135
Instructor: Maryash
Assignment: E5.14

Write a function void sort2(int &a, int &b) that swaps the values of a and b, if a is greater than b and otherwise leaves a and b unchanged.For example :
int u = 2;
int v = 3;
int w = 4;
int x = 1;
sort2(u, v); // u is still 2, v is still    sort2(w, x);   //w is now 1, x is now 4
*/

#include <iostream>
using namespace std;

void sort2(int &a, int &b) // void doesnt return, but can cout
{
  int temp = a;
  if (a > b)
  {
    a = b;
    b = temp;
  } // nothing after because its unchanged under any other condition, < or =.
  cout << a << " " << b << "\n";
}

int main()
{
  // test
  int a, b;
  cin >> a >> b;
  sort2(a, b);
  return 0;
}