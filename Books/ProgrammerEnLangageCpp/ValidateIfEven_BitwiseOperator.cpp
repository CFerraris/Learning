/* Validate if a number is even using Bitwise Operators */

#include <iostream>

using namespace std;

int main() {
  int number{0};

  cout << "Enter an integer: ";
  cin >> number;

  // Validate if the last bit is 1 (2^0 = 1)
  cout << number << ((number & 1) == 1 ? " is odd" : " is even") << endl;
}
