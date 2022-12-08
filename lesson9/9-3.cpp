#include <cstdio>

class Test {
private:
  int i;
  int j;
  int k;

public:
  Test(int v) {
    i = v;
    j = v;
    k = v;
  }
  void print(void) { printf("i = %d, j = %d, k = %d\n", i, j, k); }
};

int main(void) {
  Test t1(4);
  Test t2 = 5;
  Test t3 = Test(6);

  t1.print();
  t2.print();
  t3.print();

  Test tA[3] = {Test(1), Test(2), 4};

  for (int i = 0; i < 3; i++) {
    tA[i].print();
  }

  return 0;
}
