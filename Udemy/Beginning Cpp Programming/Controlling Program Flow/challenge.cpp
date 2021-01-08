/*
This challenge is about using a collection (list) of integers and allowing the
user to select options from a menu to perform operations on the list.

Your program should display a menu options to the user as follows:

    P - Print numbers
    A - Add a number
    M - Display mean of the numbers
    S - Display the smallest number
    L - Display the largest number
    Q - Quit

    Enter your choice:

The program should only accept valid choices from the user, both upper and
lovercase selections should be allowed. Id an illegal choice is made, you should
display, "Unknown selection, please try again" and the menu options should be
displayed again

If the user enter 'P' or 'p', you should display all of the elements (ints) in
the list. If the list is empty you should display "[] - the list is empty" If
the list is not empty then all the list element should be displayed inside
square brackets separated by a space. For example, [1 2 3 4 5]

If the user enters 'A' or 'a' then you should prompt the user for an integer to
add to the list. which you will add to the list and then display it was added.
For example, if th user enter 5 You should display, "5 added". Duplicate list
entries are OK.

If the user enters 'M' or 'm' you should calculate the mean or average of the
elements in the list and display it. If the list is empty you should display,
"Unable to calculate the mean - no data"

If the user enters 'S' or 's' you should display the smallest element in the
list. For example, if the list contains [2 4 5 1], you should display, "The
smallest number is 1"
If the list is empty you should display, "Unable to determine the smallest
number - list is empty"

If the user enters 'L' or 'l' you should display the largest element in the list
For example, if the list contains [2 4 5 1], you should display, "The largest
number is 5" If the list is empty you should display, "Unable to determine the
largest number - list is empty"

If the user enters 'Q' or 'q' then you should display "Goodbye" and the program
should terminate.

Use a vector
*/

#include <iostream>
#include <vector>

using namespace std;

char display_menu();
bool execute_choice(const char &choice, vector<int> &integers);
void print_numbers(const vector<int> &integers);
void add_number(vector<int> &integers);
void print_mean(const vector<int> &integers);
void print_smallest(const vector<int> &integers);
void print_largest(const vector<int> &integers);

int main() {
  vector<int> integers;

  bool exit{false};
  do {
    cout << "\n------------------------" << endl;
    char choice = display_menu();
    exit = execute_choice(choice, integers);
  } while (!exit);

  return 0;
}

char display_menu() {
  cout << "P - Print numbers" << endl;
  cout << "A - Add a number" << endl;
  cout << "M - Display mean of the numbers" << endl;
  cout << "S - Display the smallest number" << endl;
  cout << "L - Display the largest number" << endl;
  cout << "Q - Quit" << endl;
  cout << endl;

  char choice{};
  cout << "Enter your choice:";
  cin >> choice;
  cout << endl;

  return choice;
}

bool execute_choice(const char &choice, vector<int> &integers) {
  if (choice == 'P' || choice == 'p') {
    print_numbers(integers);
  } else if (choice == 'A' || choice == 'a') {
    add_number(integers);
  } else if (choice == 'M' || choice == 'm') {
    print_mean(integers);
  } else if (choice == 'S' || choice == 's') {
    print_smallest(integers);
  } else if (choice == 'L' || choice == 'l') {
    print_largest(integers);
  } else if (choice == 'Q' || choice == 'q') {
    cout << "Goodbye" << endl;
    return true;
  } else {
    cout << "Unknown selection, please try again" << endl;
  }

  return false;
}

void print_numbers(const vector<int> &integers) {
  if (integers.size() == 0) {
    cout << "[] - the list is empty" << endl;
  } else {
    cout << "[ ";
    for (auto i : integers) cout << i << " ";
    cout << "]" << endl;
  }
}

void add_number(vector<int> &integers) {
  int new_entry{};
  cout << "Enter the integer you'll like to add:";
  cin >> new_entry;

  integers.push_back(new_entry);
  cout << new_entry << " added" << endl;
}

void print_mean(const vector<int> &integers) {
  if (integers.size() == 0) {
    cout << "Unable to calculate the mean - no data" << endl;
  } else {
    float sum{0};
    for (auto i : integers) sum += i;

    cout << "The mean is " << sum / integers.size() << endl;
  }
}

void print_smallest(const vector<int> &integers) {
  if (integers.size() == 0) {
    cout << "Unable to determine the smallest number - list is empty" << endl;
  } else {
    int smallest = integers.at(0);
    for (auto i : integers)
      if (i < smallest) smallest = i;

    cout << "The smallest number is " << smallest << endl;
  }
}

void print_largest(const vector<int> &integers) {
  if (integers.size() == 0) {
    cout << "Unable to determine the largest number - list is empty" << endl;
  } else {
    int largest = integers.at(0);
    for (auto i : integers)
      if (i > largest) largest = i;

    cout << "The largest number is " << largest << endl;
  }
}