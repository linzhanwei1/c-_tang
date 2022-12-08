#include <cstdlib>
#include <iostream>

using namespace std;

class Test {
private:
  int i;

public:
  Test(void) {
    i = 0;
    cout << "Test()" << endl;
  }
  Test(int i) {
    cout << "Test(int i)" << endl;
    this->i = i;
  }
  ~Test(void) { cout << "~Test()" << endl; }
  int getI(void) { return i; }
};

void func(void) {
  int *p = reinterpret_cast<int *>(malloc(sizeof(int)));
  int *q = new int(10);

  *p = 5;
  // *q = 10;

  cout << *p << " " << *q << endl;

  free(p);
  delete q;

  Test *op = reinterpret_cast<Test *>(malloc(sizeof(Test)));
  Test *oq = new Test;

  cout << op->getI() << " " << oq->getI() << endl;

  free(op);
  delete oq;
}

int main(void) {

  func();

  return 0;
}
