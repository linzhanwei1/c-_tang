#include <iostream>

using namespace std;

class Parent {
protected:
  const char *name;

public:
  Parent(void) { name = "Parent"; }
  void print(void) { cout << "Name: " << name << endl; }
};

class Child : public Parent {
protected:
  int i;

public:
  Child(int i) {
    this->name = "child";
    this->i = i;
  }
};

int main(void) {
  Child child(1000);
  Parent parent = child;
  Parent *pp = &child;
  Parent &rp = child;

  parent.print();
  pp->print();
  rp.print();

  return 0;
}
