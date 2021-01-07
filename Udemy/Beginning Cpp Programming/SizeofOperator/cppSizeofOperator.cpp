#include <cfloat>
#include <climits>
#include <iostream>

using namespace std;

const string bytes_keyword{" bytes."};

void show_separator() { cout << "================================" << endl; }

void show_sizeof_information() {
  cout << "sizeof information:" << endl;
  cout << "char: " << sizeof(char) << bytes_keyword << endl;
  cout << "int: " << sizeof(int) << bytes_keyword << endl;
  cout << "unsigned int: " << sizeof(unsigned int) << bytes_keyword << endl;
  cout << "short: " << sizeof(short) << bytes_keyword << endl;
  cout << "long: " << sizeof(long) << bytes_keyword << endl;
  cout << "long long: " << sizeof(long long) << bytes_keyword << endl;
  cout << "float: " << sizeof(float) << bytes_keyword << endl;
  cout << "double: " << sizeof(double) << bytes_keyword << endl;
  cout << "long double: " << sizeof(long double) << bytes_keyword << endl;
}

void show_min_values() {
  cout << "Minimum values: " << endl;
  cout << "char: " << CHAR_MIN << endl;
  cout << "int: " << INT_MIN << endl;
  cout << "short: " << SHRT_MIN << endl;
  cout << "long: " << LONG_MIN << endl;
  cout << "long long: " << LLONG_MIN << endl;
}

void show_max_values() {
  cout << "Minimum values: " << endl;
  cout << "char: " << CHAR_MAX << endl;
  cout << "int: " << INT_MAX << endl;
  cout << "short: " << SHRT_MAX << endl;
  cout << "long: " << LONG_MAX << endl;
  cout << "long long: " << LLONG_MAX << endl;
}

void show_sizeof_with_variable() {
  cout << "sizeof using variable names" << endl;

  int age{21};
  cout << "age is " << sizeof(age) << bytes_keyword << endl;
  cout << "age is " << sizeof age << bytes_keyword << endl;
}

int main() {
  show_sizeof_information();
  show_separator();
  show_min_values();
  show_separator();
  show_max_values();
  show_separator();
  show_sizeof_with_variable();
}