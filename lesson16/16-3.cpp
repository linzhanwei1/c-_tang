#include <iostream>

using namespace std;

class Parent {
public:
  Parent(const char *s) { cout << "Parent()" << s << endl; }
  ~Parent(void) { cout << "~Parent()" << endl; }
};

class Child : public Parent {
public:
  Child(void) : Parent("Parameter from Child!") { cout << "Child()" << endl; }
  ~Child(void) { cout << "~Child()" << endl; }
};

void run(void) { Child child; }

int main(void) {
  run();
  return 0;
}
