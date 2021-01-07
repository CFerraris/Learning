/*
Write a program that asks the user to enter the following:
An integer representing de number of cents

You may assume that the number of cents entered is greater than or equal to zero

The program should then display how to provide that change to the user.

In the US:
    1 dollar is 100 cents
    1 quarter is 25 cents
    1 dime is 10 cents
    1 nickel is 5 cents
    1 penny is 1 cent

Example:
    Enter an amount in cents: 92

    You can provide this change as follows:
    dollars: 0
    quarters: 3
    dimes: 1
    nickels: 1
    pennies : 2
*/

#include <iostream>

using namespace std;

int get_number_of_coins(int amount, int coins_value) {
  return amount / coins_value;
}

int main() {
  const int cent_in_dollar{100};
  const int cent_in_quarter{25};
  const int cent_in_dime{10};
  const int cent_in_nickel{5};

  int amount{0};
  cout << "Enter an amount in cents: ";
  cin >> amount;

  int remainder{amount};

  int number_of_dollar = get_number_of_coins(remainder, cent_in_dollar);
  remainder -= number_of_dollar * cent_in_dollar;

  int number_of_quarter = get_number_of_coins(remainder, cent_in_quarter);
  remainder -= number_of_quarter * cent_in_quarter;

  int number_of_dime = get_number_of_coins(remainder, cent_in_dime);
  remainder -= number_of_dime * cent_in_dime;

  int number_of_nickel = get_number_of_coins(remainder, cent_in_nickel);
  remainder -= number_of_nickel * cent_in_nickel;

  int number_of_penny = remainder;

  cout << "\nYou can provide this change as follows:" << endl;
  cout << "dollars:\t " << number_of_dollar << endl;
  cout << "quarters:\t " << number_of_quarter << endl;
  cout << "dimes:\t\t " << number_of_dime << endl;
  cout << "nickels:\t " << number_of_nickel << endl;
  cout << "pennies:\t " << number_of_penny << endl;
}