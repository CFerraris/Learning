/*  Frank'sCarpet Cleaning Service
    Charges:
        $25 per small room
        $35 per large room
    Sales Tax rate is 6%
    Estimates are valid for 30 days

    Prompt the user for the number of rooms they would like cleaned
    and provide an estimate such as:

    Estimate for carpet cleaning service:
    Number of small rooms: 3
    Number of large rooms: 1
    Price per small room: $25
    Price per small room: $35
    Cost: $110
    Tax: $6.6
    ============================================
    Total estimate: $116.6
    This estimate is valid for 30 days
*/

#include <iostream>

using namespace std;

const float price_per_small_room{25};
const float price_per_large_room(35);
const float tax_rate{0.06};
const int valid_periode{30};

int get_number_of_room_from_user(const string room_type) {
  int number_of_room{0};
  cout << "How many " << room_type << " would you like cleaned? : " << endl;
  cin >> number_of_room;

  return number_of_room;
}

float calculate_cost(const int number_of_small_room,
                     const int number_of_large_room) {
  float price_for_small_room = number_of_small_room * price_per_small_room;
  float price_for_large_room = number_of_large_room * price_per_large_room;
  return price_for_small_room + price_for_large_room;
}

float calcultate_tax(const float cost) { return cost * tax_rate; }

int main() {
  cout << "Hello, welcome to Frank's Carpet Cleaning Service\n" << endl;

  int number_of_small_room = get_number_of_room_from_user("small");
  int number_of_large_room = get_number_of_room_from_user("large");

  cout << "\nEstimate for carpet cleaning service:" << endl;
  cout << "Number of small rooms: " << number_of_small_room << endl;
  cout << "Number of large rooms: " << number_of_large_room << endl;
  cout << "Price per small room: $" << price_per_small_room << endl;
  cout << "Price per small room: $" << price_per_large_room << endl;

  float cost = calculate_cost(number_of_small_room, number_of_large_room);
  float tax = calcultate_tax(cost);

  cout << "Cost: $" << cost << endl;
  cout << "Tax: $" << tax << endl;
  cout << "==================================================" << endl;
  cout << "Total estimate: $" << cost + tax << endl;
  cout << "This estimate is valid for " << valid_periode << " days" << endl;

  return 0;
}