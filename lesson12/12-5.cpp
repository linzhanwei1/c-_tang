#include <cstdlib>
#include <iostream>

using namespace std;

class Complex {
  int a;
  int b;

public:
  Complex(int a = 0, int b = 0) {
    this->a = a;
    this->b = b;
  }
  int getA(void) { return a; }
  int getB(void) { return b; }
  friend Complex operator+(const Complex &c1, const Complex &c2);
  friend ostream &operator<<(ostream &out, const Complex &c);
};

ostream &operator<<(ostream &out, const Complex &c) {
  out << c.a << " + " << c.b << "i";

  return out;
}

Complex operator+(const Complex &c1, const Complex &c2) {
  Complex ret;

  ret.a = c1.a + c2.a;
  ret.b = c1.b + c2.b;

  return ret;
};

int main(void) {
  Complex c1(1, 2);
  Complex c2(3, 4);
  // Complex c3 = operator+(c1, c2);
  Complex c3 = c1 + c2;

  cout << c1 << endl;
  cout << c2 << endl;
  cout << c3 << endl;
  return 0;
}
