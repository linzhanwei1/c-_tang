#include <cstdio>

class Test {
private:
  int i;
  int j;
  int k;

public:
  void print(void) { printf("i = %d, j = %d, k = %d\n", i, j, k); }
};

int main(void) {
  Test t1;
  Test t2;

  t1.print();
  t2.print();

  return 0;
}
