#include <cstring>
#include <iostream>
#include <typeinfo>

using namespace std;

class Parent {
public:
  virtual ~Parent(void) {}
};

class Child : public Parent {
public:
  int add(int a, int b) { return a + b; }
};

void test(Parent *p) {
  if (typeid(*p) == typeid(Child)) {
    Child *c = (Child *)p;
    cout << "Dynamic Type: "
         << "Child" << endl;
    cout << "add : " << c->add(2, 3) << endl;
  } else {
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
