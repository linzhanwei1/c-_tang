#ifndef _SMART_POINTER_DEF_H_
#define _SMART_POINTER_DEF_H_
#include "SmartPointer.h"
#include <iostream>
template <typename T> SmartPointer<T>::SmartPointer(void) { m_pointer = NULL; }
template <typename T> SmartPointer<T>::SmartPointer(const T *pointer) {
  m_pointer = const_cast<T *>(pointer);
}

template <typename T> SmartPointer<T>::~SmartPointer(void) { delete m_pointer; }
template <typename T> T *SmartPointer<T>::operator->(void) { return m_pointer; }
template <typename T> T &SmartPointer<T>::operator*(void) { return *m_pointer; }

#endif /* _SMART_POINTER_DEF_H_ */
