#include "array.h"
#include <cstdio>

Array::Array(int length) {
  if (length < 0)
    length = 0;

  mLength = length;
  mSpace = new int[mLength];
}

Array::Array(const Array &obj) {
  mLength = obj.mLength;
  mSpace = new int[mLength];

  for (int i = 0; i < mLength; i++) {
    mSpace[i] = obj.mSpace[i];
  }
}

int Array::length(void) { return mLength; }

void Array::setData(int index, int value) { mSpace[index] = value; }

int Array::getData(int index) { return mSpace[index]; }

Array::~Array(void) {
  printf("Array::~Array()\n");
  mLength = -1;
  delete[] mSpace;
}
