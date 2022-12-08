#include <cstdio>

class Test {
private:
  static int cCount;

public:
  static int getCount(void) { return cCount; }
  Test(void) { cCount++; }
  ~Test(void) { cCount--; }
};

int Test::cCount;
void run(void) {
  Test ta[100];
  printf("Number of Object: %d\n", Test::getCount());
}

int main(void) {
  Test t1;
  Test t2;
  printf("Number of Object: %d\n", Test::getCount());

  run();
  printf("Number of Object: %d\n", Test::getCount());

  return 0;
}
