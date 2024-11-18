#ifndef __STUDENT_H_
#define __STUDENT_H_

// You can include library here
#include "list.h"

template <typename T>
int CP::list<T>::data_iterator(CP::list<T>::iterator it) {
  // Write code here
  if(it == end()) return -1;
  int c = 0;
  node * tmp = mHeader->next;
  while(tmp != mHeader){
    if(it.ptr == tmp) return c;
    c++;
    tmp = tmp->next;
  }
  return -2;
}

#endif
