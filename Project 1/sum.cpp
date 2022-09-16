#include <iostream>
using namespace std;
int main()
{
   string s;
   int sum;
   while (cin >> s)
   { // While the reading operation is a success
      sum += stoi(s);
   }
   cout << sum;
}