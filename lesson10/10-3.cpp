#include <cstdio>

class Test {
private:
  int mI;

public:
  Test(void) {
    printf("Test()\n");
    mI = -1;
  }

  Test(int i) {
    printf("Test(int i), i = %d\n", i);
    mI = i;
  }

  Test(const Test &obj) {
    printf("Test(const Test &obj), i = %d\n", obj.mI);
    mI = obj.mI;
  }

  ~Test(void) { printf("~Test(), i = %d\n", mI); }
};

void func(Test t) { Test r(1); }

void run(void) {
  Test t(0);
  func(t);
}

int main(void) {
  run();

  return 0;
}
