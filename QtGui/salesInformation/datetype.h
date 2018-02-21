#ifndef DATETYPE_H
#define DATETYPE_H

#include <iostream>
using namespace std;

// CLASS - DATATYPE
class dateType
{
public:
  void setDate(int month, int day, int year);
  int getDay() const;
  int getMonth() const;
  int getYear() const;
  void printDate() const;
  //default constructor
  dateType(int month = 0, int day = 0, int year = 0000);

private:
  int dMonth;
  int dDay;
  int dYear;
};

// change date
void dateType::setDate(int month, int day, int year)
{
  dMonth = month;
  dDay = day;
  dYear = year;
}

// check day
int dateType::getDay() const
{
  return dDay;
}

// check month
int dateType::getMonth() const
{
  return dMonth;
}

// check year
int dateType::getYear() const
{
  return dYear;
}

// print func
void dateType::printDate() const
{
  cout << " " << dMonth << "/" << dDay << "/" << dYear;
}

//CONSTRUCTOR W/ PAREMETERS
dateType::dateType(int month, int day, int year)
{
  dMonth = month;
  dDay   = day;
  dYear  = year;
}
#endif // DATETYPE_H
