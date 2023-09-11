#include <iostream>

using namespace std;

int main() {
  int grades[5];

  // Initialize the grades
  grades[0] = 90;
  grades[1] = 80;
  grades[2] = 70;
  grades[3] = 60;
  grades[4] = 50;

  // Print the grades
  for (int i = 0; i < 5; i++) {
    cout << grades[i] << endl;
  }

  return 0;
}