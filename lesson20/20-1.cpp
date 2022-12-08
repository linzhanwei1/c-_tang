#include <iostream>

using namespace std;

template <typename T> void Swap(T &a, T &b) {
  T t = a;
  a = b;
  b = t;
}

int main(void) {
  int a = 1;
  int b = 2;

  Swap(a, b);

  cout << "a = " << a << " b = " << b << endl;

  float fa = 3.3;
  float fb = 4.7;
  Swap<float>(fa, fb);

  cout << "fa = " << fa << " fb = " << fb << endl;

  char ca = 'a';
  char cb = 'b';
  Swap(ca, cb);

  cout << "ca = " << ca << " cb = " << cb << endl;

  return 0;
}
