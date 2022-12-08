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

struct Girl : Human {
private:
  int age;

public:
  void play(void) { printf("I'm girl, I'm playing...\n"); }
  void print(void) {
    age = 22;
    printf("Girl's age is %d\n", age);

    play();
    sleep();
    work();
  }
};
struct Boy : Human {
public:
  int age;
  void play(void) { printf("I'm boy, i'm playing...\n"); }
  void print(void) {
    age = 23;

    printf("Boy's age is %d\n", age);

    play();
    sleep();
    work();
  }
};

int main(void) {
  Human human;

  human.sleep();
  human.work();

  Girl girl;
  girl.print();

  Boy boy;
  boy.print();

  return 0;
}
