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
void howToPrint(Parent *p) { p->print(); }

void run(void) {
  Parent parent;
  Child child;

  howToPrint(&parent);
  howToPrint(&child);
}

int main(void) {
  run();

  return 0;
}
