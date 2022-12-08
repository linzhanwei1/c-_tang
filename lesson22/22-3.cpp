#include <iostream>

using namespace std;

template <typename T, int N> void func(void) {
  T array[N] = {0};
  for (int i = 0; i < N; i++) {
    array[i] = i + 1;
    cout << array[i] << " ";
  }

  cout << endl;
}

int main(void) {
  func<int, 5>();
  func<float, 10>();

  return 0;
}
