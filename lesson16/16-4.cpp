#include <iostream>

using namespace std;

class Object {
public:
  Object(const char *s) {
    cout << "Object()"
         << " " << s << endl;
  }
};

class Parent : public Object {
public:
  Parent(const char *s) : Object(s) {
    cout << "Parent()"
         << " " << s << endl;
  }
};

class Child : public Parent {
protected:
  Object o1;
  Object o2;

public:
  Child(void) : o1("o1"), o2("o2"), Parent("Parameter from Child!") {
    cout << "Child()" << endl;
  }
};

void run(void) { Child child; }

int main(void) {
  run();
  return 0;
}
