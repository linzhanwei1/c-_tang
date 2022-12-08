#include <cstdio>

class M {
private:
  int mI;

public:
  M(int i) {
    printf("M(int i), i=%d\n", i);
    mI = i;
  }
  int getI(void) { return mI; }
};

class Test {
private:
  const int c;
  M m1;
  M m2;

public:
  Test(void) : c(2), m2(3), m1(2) { printf("Test()\n"); }
  void print(void) {
    printf("c = %d, m1.mI = %d, m2.mI = %d\n", c, m1.getI(), m2.getI());
  }
};

void run(void) {
  Test t1;
  t1.print();
}

int main(void) {
  run();

  return 0;
}
