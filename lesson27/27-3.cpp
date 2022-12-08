#include <iostream>
#include <typeinfo>

using namespace std;

int main(void) {
  int index;
  char ch;

  const type_info &tp = typeid(index);
  const type_info &tc = typeid(ch);

  cout << tp.name() << endl;
  cout << tc.name() << endl;

  return 0;
}
