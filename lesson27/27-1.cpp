#include <iostream>

using namespace std;

class Parent {
public:
  enum { ID = 0 };
  virtual int type(void) { return ID; }
};

class Child : public Parent {
public:
  enum { ID = 1 };
  int type(void) { return ID; }

  int add(int a, int b) { return a + b; }
};

void test(Parent *p) {
  if (p->type() == Child::ID) {
    Child *c = (Child *)p;
    cout << "Dynamic Type: "
         << "Child" << endl;
    cout << "add : " << c->add(2, 3) << endl;
  }
  if (p->type() == Parent::ID) {
    cout << "Dynamic Type: "
         << "Parent" << endl;
  }
}

int main(void) {
  Parent parent;
  Child child;

  test(&parent);
  test(&child);

  return 0;
}
