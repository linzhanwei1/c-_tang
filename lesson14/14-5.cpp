
#include <iostream>

using namespace std;

int fib1(int i) {
  int a1 = 0;
  int a2 = 1;
  int ret = a2;

  while (i > 1) {
    ret = a2 + a1;
    a1 = a2;
    a2 = ret;
    i--;
  }

  return ret;
}

int fib2(void) {
  static int a1 = 0;
  static int a2 = 1;
  int ret = a2;
  int t = a2;

  a2 = a1 + a2;
  a1 = t;

  return ret;
}

class Fib {
private:
  int a1;
  int a2;

public:
  Fib(void) {
    a1 = 0;
    a2 = 1;
  }
  int operator()(void) {
    int ret = a2;
    int t = a2;
    a2 = a1 + a2;
    a1 = t;

    return ret;
  }
};

int main(void) {
  cout << "fib1(int i)" << endl;

  for (int i = 1; i <= 10; i++) {
    cout << fib1(i) << endl;
  }
  cout << endl;
  cout << "fib2()" << endl;
  for (int i = 1; i <= 10; i++) {
    cout << fib2() << endl;
  }
  cout << endl;

  Fib fib;
  cout << "Fib fib;" << endl;
  for (int i = 1; i <= 10; i++) {
    cout << fib() << endl;
  }
  cout << endl;

  return 0;
}
