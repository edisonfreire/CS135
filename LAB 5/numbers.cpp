/*
Author: Edison Freire
Course: CSCI-135
Instructor: Maryash
Assignment: Lab5
*/

#include <iostream>
using namespace std;

bool isDivisibleBy(int n, int d) {
  if (d == 0) {
    return false;
  } else {
    return n % d == 0; // boolean because ==
  }
}

bool isPrime(int n) {
  if (n <= 1) {
    return false;
  }
  for (int i = 2; i <= n - 1; i++) {
    if (isDivisibleBy(n, i)) {
      return false;
    }
  }
  return true;
}

int nextPrime(int n) {
  int np = n + 1;
  while (!isPrime(np)) // ! is not, so while np is not prime.
  {
    np += 1;
  }
  return np;
}

int countPrimes(int a, int b) {
  int c = 0;
  for (int i = a; i <= b; i++) {
    if (isPrime(
            i)) // if statements by default only work if the condition is true.
    {
      c += 1;
    }
  }
  return c;
}

bool isTwinPrime(int n) {
  if (isPrime(n) &&
      (isPrime(n - 2) ||
       isPrime(n + 2))) // if n is prime and (n-2 is prime or n+2 is prime).
  {
    return true;
  } else {
    return false;
  }
}

int nextTwinPrime(int n) {
  int ntp = n + 1;
  while (!isTwinPrime(ntp)) // while ntp is not a twin prime.
  {
    ntp += 1;
  }
  return ntp;
}

int largestTwinPrime(int a, int b) {
  for (int i = b; i >= a;
       i--) // starts from the biggest number, since its asking for the largest.
            // No point in iterating from the smallest value.
  {
    if (isTwinPrime(i)) {
      return i;
    }
  }
  return -1;
}

int main() {
  int n, d;
  cin >> n >> d;
  cout << isDivisibleBy(n, d) << "\n";
  cout << isPrime(n) << "\n";
  cout << nextPrime(n) << "\n";
  cout << countPrimes(n, d) << "\n";
  cout << isTwinPrime(n) << "\n";
  cout << nextTwinPrime(n) << "\n";
  cout << largestTwinPrime(n, d) << "\n";
}