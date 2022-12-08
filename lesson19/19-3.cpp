#include <iostream>

using namespace std;

class Object {
protected:
  int d;

public:
  void f(void) { cout << "Object::f" << endl; }
};

class P1 : public Object {
protected:
  int i;
};

class P2 : public Object {
protected:
  int j;
};

class Child : public P1, public P2 {
public:
  Child(int i, int j) {
    this->d = 3;
    this->i = i;
    this->j = j;
  }

  void print(void) { cout << "i = " << i << ", j = " << j << endl; }
};

int main(void) {
  Child c(1, 2);

  c.print();
  c.f();

  return 0;
}
