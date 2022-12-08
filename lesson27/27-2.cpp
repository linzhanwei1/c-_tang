#include <cstring>
#include <iostream>

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
  Child *c = dynamic_cast<Child *>(p);
  if (c != NULL) {
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
