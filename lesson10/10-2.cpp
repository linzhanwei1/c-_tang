#include <cstdio>

class Test {
private:
  int mI;

public:
  Test(int i) : mI(i) { printf("Test(), mI = %d\n", mI); }

  ~Test(void) { printf("~Test(), mI = %d\n", mI); }
};

void run(void) {
  Test t1(1);
  Test t2(2);
}

int main(void) {

  run();
  return 0;
}
