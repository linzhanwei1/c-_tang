#ifndef _ARRAY_H_
#define _ARRAY_H_

class Array {
private:
  int mLength;
  int *mSpace;

public:
  Array(int length);
  ~Array(void);
  Array(const Array &obj);
  int length(void);
  void setData(int index, int value);
  int getData(int index);
};

#endif /* _ARRAY_H_ */
