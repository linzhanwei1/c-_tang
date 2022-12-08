#include <iostream>

using namespace std;

class P1 {
protected:
  int i;
};

class P2 {
protected:
  int j;
};

class Child : public P1, public P2 {
public:
  Child(int i, int j) {
    this->i = i;
    this->j = j;
  }

  void print(void) { cout << "i = " << i << ", j = " << j << endl; }
};

int main(void) {
  Child c(1, 2);

  c.print();

  return 0;
}
