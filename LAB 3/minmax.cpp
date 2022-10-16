/*
Author: Edison Freire
Course: CSCI-135
Instructor: Maryash
Assignment: Lab3B

Write a program that finds the minimum and maximum storage in East basin in
2018.
*/

#include <iostream>
using namespace std;
#include <climits>
#include <cstdlib>
#include <fstream>

int main() {
  ifstream fin("Current_Reservoir_Levels.tsv");
  if (fin.fail()) {
    cerr << "File cannot be opened for reading." << endl;
    exit(1); // exit if failed to open the file
  }
  string junk;
  getline(fin, junk); // skips first line of the tsv
  string date;
  double eastSt, eastEl, westSt, westEl, min, max;

  while (fin >> date >> eastSt >> eastEl >> westSt >>
         westEl) { // this loop reads the file line-by-line, extracting 5 values
                   // on each iteration
    fin.ignore(
        INT_MAX,
        '\n'); ////skips to the end of line, ignoring the remaining columns

    if (date ==
        "01/01/2018") { // sets min and max to the value of the first date
      max = eastSt;
      min = eastSt;
    }

    if (eastSt > max) {
      max = eastSt;
    }

    if (eastSt < min) {
      min = eastSt;
    }
  }

  cout << "Minimum storage in East basin: " << min << " billion gallons\n";
  cout << "Maximum storage in East basin: " << max << " billion gallons\n";

  fin.close();
  return 0;
}