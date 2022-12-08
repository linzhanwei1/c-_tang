#include "SmartPointer.hpp"
#include <iostream>

using namespace std;

int main(void) {
  SmartPointer<int> pi = new int(5);

  cout << *pi << endl;

  return 0;
}
