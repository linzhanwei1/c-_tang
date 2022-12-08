#include <cstdio>

struct Biology {
  bool living;
};

struct Animal : Biology {
  bool movable;
  void findFood(){};
};

struct Plant : Biology {
  bool growable;
};

struct Beast : Animal {
  void sleep() {}
};

class Human : Animal {
public:
  void sleep() { printf("I'm sleeping...\n"); };
  void work() { printf("I'm working...\n"); };
};

int main(void) {
  Human human;

  human.sleep();
  human.work();

  return 0;
}
