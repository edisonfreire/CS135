#include <iostream>
using namespace std;
int main()
{

   int num, result = 0;
   char oper;
   cin >> result; // makes result = first value of the formula
   while (cin >> oper)
   { // While the reading operation is a success
      if (oper == '+')
      {
         cin >> num;
         result += num;
      }
      else if (oper == '-')
      {
         cin >> num;
         result -= num;
      }
   }
   cout << result << "\n";
}