//
// File: main.cpp
// Description: Parsing Dates
// Created: Sun. Feb 26, 2023
// Author: Noah Sanderson
// mail: Noahs6423@student.vvc.edu
//

/*Complete main() to read dates from input, one date per line. Each date's
format must be as follows: March 1, 1990. Any date not following that format is
incorrect and should be ignored. Use the substr() function to parse the string
and extract the date. The input ends with -1 on a line alone. Output each
correct date as: 3-1-1990.

Ex: If the input is:

March 1, 1990
April 2 1995
7/15/20
December 13, 2003
-1
then the output is:

3-1-1990
12-13-2003

Use the provided DateParser() function to convert a month string to an integer.
If the month string is valid, an integer in the range 1 to 12 inclusive is
returned, otherwise 0 is returned. Ex: DateParser("February") returns 2 and
DateParser("7/15/20") returns 0. */

#include <iostream>
#include <sstream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int DateParser(string month) {
  int monthInt = 0;

  if (month == "January")
    monthInt = 1;
  else if (month == "February")
    monthInt = 2;
  else if (month == "March")
    monthInt = 3;
  else if (month == "April")
    monthInt = 4;
  else if (month == "May")
    monthInt = 5;
  else if (month == "June")
    monthInt = 6;
  else if (month == "July")
    monthInt = 7;
  else if (month == "August")
    monthInt = 8;
  else if (month == "September")
    monthInt = 9;
  else if (month == "October")
    monthInt = 10;
  else if (month == "November")
    monthInt = 11;
  else if (month == "December")
    monthInt = 12;
  return monthInt;
}

int main() {
  string userInfo;
  string month;
  string day;
  string year;
  int pos1;
  int pos2;
  

  getline(std::cin, userInfo);

  while (userInfo != "-1") {
    if (userInfo.find(",") != string::npos) {
      pos1 = userInfo.find(" ");
      pos1 = userInfo.find(",", pos1 + 1);
      month = userInfo.substr(0, pos1);
      day = userInfo.substr(pos1 + 1, pos2 - pos1 - 1);
      year = userInfo.substr(pos2 + 2);
      if (DateParser(month) != 0) {
        cout << DateParser(month) << "-" << day << "-" << year << endl;
      }
    }
    getline(std::cin, userInfo);
  }
}
