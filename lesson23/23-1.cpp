#include <iostream>
#include <vector>

using namespace std;

int main(void) {
  vector<int> vi(10);

  for (int i = 0; i < 5; i++) {
    vi[i] = i + 1;
  }

  cout << "Elements in ui:" << endl;
  vi.resize(5);

  for (int i = 0; i < vi.size(); i++) {
    cout << vi[i] << endl;
  }
  return 0;
}
