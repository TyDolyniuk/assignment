#include <iostream>
using namespace std;

int main() {
   int threshold;
   int a;
   int b;

   cin >> threshold;

   for (a = 0; a < 3; ++a) {
      cout << a << ": ";

      for (b = 8; b < 9; ++b) {
         if (a > threshold) {
            cout << "_,";
            continue;
         }

         cout << b << ",";
      }

      cout << endl;
   }

   return 0;
}