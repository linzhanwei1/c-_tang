#include <iostream>
#include <list>

using namespace std;

int main(void) {
  list<double> l;

  cout << "l size: " << l.size() << endl;

  for (int i = 0; i < 5; i++) {
    l.push_back(i * 0.66);
  }

  cout << "l size: " << l.size() << endl;

  for (list<double>::iterator current = l.begin(); current != l.end();
       current++) {
    cout << *current << endl;
  }

  return 0;
}
