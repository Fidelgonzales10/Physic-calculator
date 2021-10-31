
// Practice with  Dr_ T's Input Validation Header
// Student: Fidel Gonzales , Fall 2021
#include <iostream>
#include "Input_Validation_Extended.h"
#include <string>
using namespace std;



void calcCube(double);
string dayoftheweek(int);




int main() 
{
int input = 0;
double inputDouble =0.0;




cout << "\nPlease enter a number with no decimal: ";
cin >> input;

// Is it truly an integer
cout << "\nPlease enter a number with no decimals(day of the week) ";
input = validateInt(input);
cout << "The day of the week is " << dayoftheweek(input) << endl;


cout << "\nPlease enter a number that you wish to get the cubic value for: ";
inputDouble = validateDouble(inputDouble);
calcCube(inputDouble);


return 0;
}

void calcCube(double num)
{
  double cubeValue = num * num * num;
  cout << "The cube of your number: " << num << ", is " << cubeValue << endl;
}

string dayoftheweek(int day)
{
string color;
string reset = "\x1b[0m";

string weekDay = "";
if(day == 1)
{
color = "\x1b[" + to_string(32) + ";1m";
    weekDay = color + "Sunday" + reset; 
  }
  else if(day == 2)
  {
color = "\x1b[" + to_string(35) + ";1m";
    weekDay = color + "Monday" + reset;
  }
  else if(day == 3)
  {
color = "\x1b[" + to_string(36) + ";1m";
    weekDay = color + "Tuesday" + reset;
  }
  else if(day == 4)
  {
color = "\x1b[" + to_string(93) + ";1m";
    weekDay = color + "Wednsday" + reset;
  }
  else if(day == 5)
  {
color = "\x1b[" + to_string(31) + ";1m";
    weekDay = color + "Thursday" + reset;
  }
  else if(day == 6)
  {
color = "\x1b[" + to_string(34) + ";1m";
    weekDay = color + "Friday" + reset;
  }
  else if(day == 7)
  {
color = "\x1b[" + to_string(33) + ";1m";
    weekDay = color + "Saturday" + reset;
  }
  else //default
  {
    weekDay = "Error!!!!!"; 
  }

  return weekDay; 
  
}
