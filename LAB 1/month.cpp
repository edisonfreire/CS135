/*
Author: Edison Freire
Course: CSCI-135
Instructor: Maryash
Assignment: Lab1D

Asks the user to input the year and month (1-12) and prints the number of days
in that month (taking into account leap years.) You may not use switch case or
arrays even if you know these language constructs.
*/

#include <iostream>
using namespace std;

int main() {
  int year;
  int month;
  int days;
  string yearType;

  cout << "Enter year: ";
  cin >> year;
  cout << "Enter month: ";
  cin >> month;

  if (year % 4 != 0) {
    yearType = "common";
  } else if (year % 100 != 0) {
    yearType = "leap";
  } else if (year % 400 != 0) {
    yearType = "common";
  } else {
    yearType = "leap";
  }

  if (month == 1) {
    days = 31;
  } else if (month == 2 and yearType == "leap") {
    days = 29;
  } else if (month == 2 and yearType == "common") {
    days = 28;
  } else if (month == 3) {
    days = 31;
  } else if (month == 4) {
    days = 30;
  } else if (month == 5) {
    days = 31;
  } else if (month == 6) {
    days = 30;
  } else if (month == 7) {
    days = 31;
  } else if (month == 8) {
    days = 31;
  } else if (month == 9) {
    days = 30;
  } else if (month == 10) {
    days = 31;
  } else if (month == 11) {
    days = 30;
  } else {
    days = 31;
  }

  cout << days << " days\n";

  return 0;
}