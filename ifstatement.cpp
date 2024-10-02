#include <iostream>

using namespace std;

int main() {
  int myint;
  cout << "Please enter an integer: ";
  cin >> myint;
  if (myint == 0) {
    cout << "Hello World" << endl;
  } else if (myint == 1) {
    cout << "I am Groot" << endl;
  } else if (myint == 2) {
    cout << "To the Top" << endl;
  } else if (myint == 3) {
    cout << "Where is the Horizon" << endl;
  } else if (myint == 4) {
    cout << "I do not know" << endl;
  } else {
    cout << "Yeah, I will." << endl;
  }

}
