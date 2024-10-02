#include <iostream>

using namespace std;

int main() {
  int myint;
  cout << "Please enter an integer: ";
  cin >> myint;

  switch (myint)
  {
    case 0:
      cout << "Hello World" << endl;
      break;
    case 1:
      cout << "I am Groot" << endl;
      break;
    case 2:
      cout << "To the Top" << endl;
      break;
    case 3:
      cout << "Where is the Horizon" << endl;
      break;
    case 4:
      cout << "I do not know" << endl;
      break;
    default:
      cout << "Yeah, I will." << endl;
      break;
  }
}
