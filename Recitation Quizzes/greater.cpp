#include <iostream>
using namespace std;

int main(){
   int x, y;
   cout << "Enter the first number: ";
   cin >> x;
   cout << "Enter the second number: ";
   cin >> y;

   if (x > y) {
      cout << x;
   }else if (x < y) {
      cout << y;
   }

   return 0;
}