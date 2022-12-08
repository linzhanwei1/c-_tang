#include <iostream>

using namespace std;

class Parent {
private:
  int a;

public:
  Parent(void) { a = 1000; }

  void print(void) { cout << "a = " << a << endl; }
};

class Child : public Parent {};

int main(void) {
  Parent parent;
  Child child;

  parent.print();
  child.print();

  return 0;
}
