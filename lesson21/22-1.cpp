#include <iostream>

using namespace std;

template <typename T> class Operator {
public:
  T add(T a, T b) { return a + b; }
  T minus(T a, T b) { return a - b; }
};

int main(void) {
  Operator<int> op1;
  Operator<double> op2;

  cout << op1.add(5, 4) << endl;
  cout << op1.minus(4, 5) << endl;

  cout << op2.add(1.3, 0.01) << endl;
  cout << op2.minus(0.01, 1.3) << endl;
  return 0;
}
