#include <iostream>

using namespace std;

class Parent {
public:
  Parent(void) { cout << "Parent()" << endl; }
  ~Parent(void) { cout << "~Parent()" << endl; }
};

class Child : public Parent {
public:
  Child(void) { cout << "Child()" << endl; }
  ~Child(void) { cout << "~Child()" << endl; }
};

void run(void) { Child child; }

int main(void) {
  run();
  return 0;
}
