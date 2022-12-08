#include <iostream>

using namespace std;

class Parent {
protected:
  int i;

public:
  virtual void f(void) { cout << "Parent::f()" << endl; }
};

class Child : public Parent {
protected:
  int j;

public:
  Child(int i, int j) {
    this->i = i;
    this->j = j;
  }

  void f(void) {
    cout << "i = " << i << " "
         << "j = " << j << endl;
  }
};

int main(void) {
  Parent *p = NULL;
  Child *c = NULL;

  Child ca[3] = {Child(1, 2), Child(3, 4), Child(5, 6)};
  cout << "sizeof Parent:" << sizeof(Parent) << endl;
  cout << "sizeof Child:" << sizeof(Child) << endl;

  p = ca;
  c = ca;

  p->f();
  c->f();

  p++;
  c++;

  p->f();
  c->f();

  return 0;
}
