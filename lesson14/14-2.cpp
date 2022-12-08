
#include <cstdlib>
#include <iostream>

using namespace std;

class Test {
public:
  Test(int i) { cout << "Test(int i)" << endl; }
  Test(const Test &obj) { cout << "Test(const Test &obj)" << endl; }
  ~Test(void) { cout << "~Test(void)" << endl; }
};

void func(void) {

  Test t1(5);
  Test t2 = 5;
  Test t3 = Test(5);
}

int main(void) {
  func();

  return 0;
}
