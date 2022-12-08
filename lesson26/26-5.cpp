#include <iostream>
#include <stdexcept>

using namespace std;

int Div(int a, int b) {
  if ((-0.00000001 < b) && (b < 0.00000001)) {
    throw invalid_argument("Divide by zero...");
  }

  return a / b;
}

int main(void) {
  try {
    cout << Div(1, 0) << endl;
  } catch (logic_error &e) {
    cout << e.what() << endl;
  }

  return 0;
}
