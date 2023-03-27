#include <iostream>
using namespace std;

int main() {
   int a, b, c, d;

   cout << "Enter four numbers: ";
   cin >> a >> b >> c >> d;

   int greatest = a; // set first number as the greatest

   // compare the first number with the rest of the numbers
   if (b > greatest) {
      greatest = b;
   }
   if (c > greatest) {
      greatest = c;
   }
   if (d > greatest) {
      greatest = d;
   }

   cout << "Greatest number among " << a << ", " << b << ", " << c << " and " << d << " is: " << greatest << endl;

   return 0;
}
