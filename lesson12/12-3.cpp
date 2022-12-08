#include <cstdlib>
#include <iostream>

using namespace std;

struct Complex {
  int a;
  int b;
};

Complex operator+(const Complex &c1, const Complex &c2) {
  Complex ret;

  ret.a = c1.a + c2.a;
  ret.b = c1.b + c2.b;

  return ret;
};

int main(void) {
  Complex c1 = {1, 2};
  Complex c2 = {3, 4};
  // Complex c3 = operator+(c1, c2);
  Complex c3 = c1 + c2;

  cout << "c3.a = " << c3.a << endl;
  cout << "c3.b = " << c3.b << endl;
  return 0;
}
