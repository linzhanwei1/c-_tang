#include <cstdio>

class Test {
private:
  int i;
  int j;
  int k;

public:
  void initialize(void) {
    i = 0;
    j = 0;
    k = 0;
  }
  void print(void) { printf("i = %d, j = %d, k = %d\n", i, j, k); }
};

int main(void) {
  Test t1;
  Test t2;
  Test t3;

  t1.initialize();

  t1.print();
  t2.print();
  t3.print();

  return 0;
}
