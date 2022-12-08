#include <iostream>

using namespace std;

class Boss {
private:
  static Boss *cInstance;
  Boss(void) {}

public:
  static Boss *GetInstance(void) {
    if (cInstance == NULL) {
      cInstance = new Boss();
    }
    return cInstance;
  }

  int fight(void) {
    cout << "Boss::fight()" << endl;
    return 10;
  }
};

Boss *Boss::cInstance = NULL;

class Master {
public:
  virtual int eightSwordKill(void) {
    cout << "Master::eightSwordKill()" << endl;
    return 8;
  }
};

class NewMaster : public Master {
public:
  virtual int eightSwordKill(void) {
    cout << "New master::eightSwordKill()" << endl;
    return Master::eightSwordKill() * 2;
  }
};

void fieldPK(Master *master, Boss *boss) {

  int k = master->eightSwordKill();
  int b = boss->fight();

  if (k < b) {
    cout << "Master is killed..." << endl;
  } else {
    cout << "Boss is killed..." << endl;
  }
}

int main(void) {
  Boss *boss = Boss::GetInstance();
  cout << "Master vs Boss" << endl;
  Master master;

  fieldPK(&master, boss);

  NewMaster newMaster;
  cout << "New master vs Boss" << endl;
  fieldPK(&newMaster, boss);

  return 0;
}
