/*  Frank'sCarpet Cleaning Service
    Charges $30 per room
    Sales Tax rate is 6%
    Estimates are valid for 30 days

    Prompt the user for the number of rooms they would like cleaned
    and provide an estimate such as:

    Estimate for carpet cleaning service:
    Number of rooms:
    Price per room: $30
    Cost: $60
    Tax: $3.6
    ============================================
    Total estimate: $63.6
    This estimate is valid for 30 days
*/

#include <iostream>

using namespace std;

int main() {
  const float price_per_room{30};
  const float tax_rate{0.06};
  const int valid_periode{30};

  cout << "Hello, welcome to Frank's Carpet Cleaning Service\n" << endl;

  int number_of_room{0};
  cout << "How many rooms would you like cleaned? : " << endl;
  cin >> number_of_room;

  cout << "\nEstimate for carpet cleaning service:" << endl;
  cout << "Number of rooms: " << number_of_room << endl;
  cout << "Price per room: $" << price_per_room << endl;

  float cost = number_of_room * price_per_room;
  cout << "Cost: $" << cost << endl;

  float tax = cost * tax_rate;
  cout << "Tax: $" << tax << endl;
  cout << "==================================================" << endl;
  cout << "Total estimate: $" << cost + tax << endl;
  cout << "This estimate is valid for " << valid_periode << " days" << endl;

  return 0;
}