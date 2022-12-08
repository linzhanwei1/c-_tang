#include <iostream>

using namespace std;

template <typename T1, typename T2> class Test {
public:
  void add(T1 a, T2 b) { cout << a + b << endl; }
};

int main(void) {
  Test<double, int> t;

  t.add(10.0001, 8);

  return 0;
}
