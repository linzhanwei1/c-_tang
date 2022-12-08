
#include <iostream>

using namespace std;

class Parent {
public:
  Parent(void) { func(); }
  virtual void func(void) { cout << "void Parent::func()" << endl; }
};

class Child : public Parent {
public:
  void func(void) { cout << "void Child::func()" << endl; }
};

int main(void) {
  Parent p;

  Child c;

  return 0;
}
