#include <iostream>
using namespace std;

class Test {
  int *p;

public:
  Test(void) {
    cout << "Test()" << endl;
    p = new int[5];
    throw 10;
  }
  ~Test(void) {
    cout << "~Test()" << endl;
    delete[] p;
  }
};

int main(void) {
  try {
    Test t;
  } catch (int e) {
    cout << "Catch: " << e << endl;
  }
}
