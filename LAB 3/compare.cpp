/*
Author: Edison Freire
Course: CSCI-135
Instructor: Maryash
Assignment: Lab3C

Write a program that asks the user to input two dates (the beginning and the end of the interval). The program should check each day in the interval and report which basin had higher elevation on that day by printing “East” or “West”, or print “Equal” if both basins are at the same level.
*/

//

#include <iostream>
using namespace std;
#include <fstream>
#include <cstdlib>
#include <climits>

int main()
{
   ifstream fin("Current_Reservoir_Levels.tsv");
   if (fin.fail())
   {
      cerr << "File cannot be opened for reading.\n";
      exit(1); // exit if failed to open the file
   }

   string junk;
   getline(fin, junk); // skips the first header line of the tsv file

   double eastSt, eastEl, westSt, westEl;
   string date, startDate, endDate;

   string dates[365];                               //
   double eastElevations[365], westElevations[365]; //
   int counter = 0, startCount, endCount;

   cout << "Enter starting date: ";
   cin >> startDate;
   cout << "Enter ending date: ";
   cin >> endDate;

   while (fin >> date >> eastSt >> eastEl >> westSt >> westEl)
   {
      // this loop reads the file line-by-line, extracting 5 values on each iteration
      fin.ignore(INT_MAX, '\n'); // skips to the end of line, ignoring the remaining columns

      eastElevations[counter] = eastEl; //
      westElevations[counter] = westEl; //
      dates[counter] = date;            //

      if (date == startDate) //
      {
         startCount = counter;
      }

      if (date == endDate) //
      {
         endCount = counter;
      }
      counter++;
   }

   // cout << startCount << " " << endCount <<<"\n";

   for (int i = startCount; i <= endCount; i++)
   {
      cout << dates[i] << " ";
      if (eastElevations[i] > westElevations[i])
      {
         cout << "East\n";
      }
      else if (westElevations[i] > eastElevations[i])
      {
         cout << "West\n";
      }
      else
      {
         cout << "Equal\n";
      }
   }

   fin.close();
   return 0;
}

//

//

//