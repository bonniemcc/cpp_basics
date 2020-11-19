#include <iostream>

/* Program takes a year as input.
Checks to see if the year is a four-digit number.
Displays whether or not the year falls on a leap year.
*/

int main() {

  int year;

  std::cout << "Input year: ";
  std::cin >> year;

  if (year < 1000 || year > 9999) {

    std::cout << "Year is NOT a 4-digit number\n";

  }
  else if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {

    std::cout << year << " is a leap year\n";

  }
  else {

    std::cout << year << " is not a leap year\n";

  }

}
