#ifndef _SMART_POINTER_H_
#define _SMART_POINTER_H_

template <typename T> class SmartPointer {
protected:
  T *m_pointer;

public:
  SmartPointer(void);
  SmartPointer(const T *pointer);
  ~SmartPointer(void);
  T *operator->(void);
  T &operator*(void);
};

#endif /* _SMART_POINTER_H_ */
