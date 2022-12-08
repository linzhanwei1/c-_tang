#include <cstdio>

class Test {
public:
  /*
  Test(void) { printf("Test()\n"); }
  Test(const Test &obj) { printf("Test(const Test& obj)\n"); }
  */
};

int main(void) {
  Test t1;
  Test t2 = t1;

  return 0;
}
