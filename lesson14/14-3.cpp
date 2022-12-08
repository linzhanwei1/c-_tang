#include <iostream>

using namespace std;

class Singleton {
private:
  static Singleton *cInstance;

  Singleton(void) {}

public:
  static Singleton *GetInstance(void) {
    if (cInstance == NULL) {
      cInstance = new Singleton();
    }
    return cInstance;
  }
  void print(void) { cout << "I'm Singleton!" << endl; }
};

Singleton *Singleton::cInstance = NULL;

void func(void) {
  Singleton *s = Singleton::GetInstance();
  s->print();
}

int main(void) {
  func();

  return 0;
}
