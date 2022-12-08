#include <iostream>

using namespace std;

template <int N> class Sum {
public:
  static const int VALUE = Sum<N - 1>::VALUE + N;
};

template <> class Sum<1> {
public:
  static const int VALUE = 1;
};

int main(void) {
  cout << Sum<100>::VALUE << endl;

  return 0;
}
