#include <iostream>
using namespace std;

// receives integer and return its factorial
int FirstFactorial(int num) {
   int result = 1;
   while (num > 1) {
      result *= num--;
   }
   return result;
}

int main() {
   int num;
   cin >> num;
   cout << FirstFactorial(num) << endl;
   return 0;
}
