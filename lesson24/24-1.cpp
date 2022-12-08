#include <iostream>

using namespace std;

template <class T> T Minus(T a, T b) { return a - b; }

template <class T> class Add {
public:
  T add(T a, T b) { return a + b; }
};

int main(void) {
  cout << Minus(3, 4) << endl;
  cout << Minus<float>(0.3, 0.4) << endl;

  Add<double> ap;

  cout << ap.add(9, 8) << endl;
  cout << ap.add(0.001, 0.1) << endl;

  return 0;
}
