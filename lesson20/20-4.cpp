#include <iostream>

using namespace std;

template <typename RT, typename T1, typename T2> RT Add(T1 a, T2 b) {
  return static_cast<RT>(a + b);
}

int main(void) {
  cout << Add<double, char, float>('a', 100.0f) << endl;
  cout << Add<double>('a', 100.0f) << endl;

  return 0;
}
