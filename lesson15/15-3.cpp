#include <iostream>

using namespace std;

class Parent {
protected:
  int a;

public:
  Parent(void) { a = 1000; }

  void print(void) { cout << "a = " << a << endl; }
};

class Child : public Parent {
protected:
  int b;

public:
  void set(int a, int b) {
    this->a = a;
    this->b = b;
  }
};

int main(void) {
  Parent parent;
  Child child;

  parent.print();
  child.print();

  return 0;
}
