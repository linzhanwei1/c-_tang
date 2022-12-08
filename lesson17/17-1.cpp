#include <iostream>

using namespace std;

class Parent {
public:
  void print(void) { cout << "I'm Parent..." << endl; }
};

class Child : public Parent {
public:
  void print(void) { cout << "I'm Child..." << endl; }
};

void run(void) {
  Child child;
  Parent *pp = &child;
  Parent &rp = child;

  child.print();
  pp->print();
  rp.print();
}

int main(void) {
  run();

  return 0;
}
