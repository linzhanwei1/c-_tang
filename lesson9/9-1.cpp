#include <cstdio>

class Test {
private:
  int i;

public:
  void initialize(void) { i = 0; }
  int getI(void) { return i; }
};

int main(void) {
  Test t1;
  Test t2;
  Test t3;

  t1.initialize();
  t2.initialize();
  t3.initialize();

  printf("t1.i = %d\n", t1.getI());
  printf("t2.i = %d\n", t2.getI());
  printf("t3.i = %d\n", t3.getI());

  return 0;
}
