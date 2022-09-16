/*
Author: Edison Freire
Course: CSCI-135
Instructor: Maryash
Assignment: Project 1 task 1

Create a file called direction_reader.cpp that reads a sequence of letters from cin and prints out its corresponding direction.
‘R’: go Right of the current location
‘L’: go Left of the current location
‘U’: go Up from the current location
‘D’: go Down from the current location
*/

#include <iostream>
using namespace std;

int main()
{
   char s;
   while (cin >> s)
   { // While the reading operation is a success
      if (s == 'R')
      {
         cout << "Right\n";
      }
      else if (s == 'L')
      {
         cout << "Left\n";
      }
      else if (s == 'U')
      {
         cout << "Up\n";
      }
      else if (s == 'D')
      {
         cout << "Down\n";
      }
      else
         cout << "Error";
   }
   return 0;
}