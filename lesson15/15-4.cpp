#include <iostream>

using namespace std;

class A {
private:
  int a;

protected:
  int b;

public:
  int c;

  A(void) {
    a = 0;
    b = 0;
    c = 0;
  }
  void set(int a, int b, int c) {
    this->a = a;
    this->b = b;
    this->c = c;
  }
};

class B : public A {
public:
  cout << "a = " << a;
  cout << "b = " << b;
  cout << "c = " << c << endl;
};

class C : protected A {
public:
  cout << "a = " << a;
  cout << "b = " << b;
  cout << "c = " << c << endl;
};

class D : private A {
public:
  cout << "a = " << a;
  cout << "b = " << b;
  cout << "c = " << c << endl;
};

int main(void) { return 0; }
