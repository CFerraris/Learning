#include <iostream>

int main() {
  std::cout << "Enter your favorite number between 1 and 100: " << std::endl;

  int favorite_number;
  std::cin >> favorite_number;

  std::cout << "Amazing!! That's my favorite number too!" << std::endl;
  std::cout << "No really!!, " << favorite_number << " is my favorite number!"
            << std::endl;

  return 0;
}
