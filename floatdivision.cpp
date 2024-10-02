#include <iostream>
#include<limits>
using namespace std;
//Write a program that will divide the two floating points entered by the user (first number entered divided by the second number entered). 
//Make sure your application handles all possible scenarios with floating points.

int main() 
{
  float num1, num2, mx, mn;
  mx = std::numeric_limits<float>::max();
  mn = std::numeric_limits<float>::lowest();

  cout << "Please enter your dividend: ";
  cin >> num1;

  cout << "Please enter your divisor: ";
  cin >> num2;


  if (num1 == 0) {
    cout << "zero divisor is not allowed!";
  } else if (num1 > mx || num2 > mx) {
    cout << "Exceeded maximum value!";
  } else if (num1 < mn || num2 < mn ) {
    cout << "Exceeded maximum value!";
  } else {
    cout << num1 / num2;
  }
}

