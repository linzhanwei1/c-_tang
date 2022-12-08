#include <iostream>

using namespace std;

class Parent {
protected:
  int i;
  int f;
};

class Child : public Parent {
protected:
  int i;

  void f(void) {
    cout << "Parent::i = " << Parent::i << endl;
    cout << "Child::i = " << Child::i << endl;
    cout << "Parent::f = " << Parent::f << endl;
  }

public:
  Child(int i, int j) {
    Parent::i = i;
    Child::i = j;
    Parent::f = i + j;

    f();
  }
};

void run(void) { Child child(1, 3); }

int main(void) {
  run();
  return 0;
}
