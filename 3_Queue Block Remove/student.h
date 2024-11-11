#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "queue.h"
template <typename T>
void CP::queue<T>::block_remove(size_t from, size_t to) {
    // Write your code here
    if(from > mSize/2){
        size_t size = mSize - to - 1;
        for (size_t i = 0; i < size; i++) {
            mData[(mFront + from + i) % mCap] = mData[(mFront + to + 1 + i) % mCap];
        }
    }else{
        size_t size = from;
        for (size_t i = 0; i < size; i++) {
            mData[(mFront + to - i) % mCap] = mData[(mFront + from - 1 - i) % mCap];
        }
        mFront = (mFront + (to - from + 1)) % mCap;
    }
    mSize -= (to - from + 1);
}
#endif

