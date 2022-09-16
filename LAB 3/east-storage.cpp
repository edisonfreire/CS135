/*
Author: Edison Freire
Course: CSCI-135
Instructor: Maryash
Assignment: Lab3A

Write a program that asks the user to input a string representing the date (in MM/DD/YYYY format), and prints out the East basin storage on that day.
*/

#include <iostream>
using namespace std;
#include <fstream>
#include <cstdlib>
#include <climits>


int main(){
   ifstream fin("Current_Reservoir_Levels.tsv");
   string junk;
   getline(fin, junk); //skips first line of the tsv
   string date, inputDate;
   double eastSt, eastEl, westSt, westEl;
   cout << "Enter date: ";
   cin >> inputDate;
   cout << "East Basin Storage: ";
   while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) { // this loop reads the file line-by-line, extracting 5 values on each iteration 
      fin.ignore(INT_MAX, '\n'); ////skips to the end of line, ignoring the remaining columns 
      if (date == inputDate) {
         cout << eastSt << " billion gallons\n";
      }
   }
   fin.close();
   return 0;
}

//one more comment