#ifndef __STUDENT_H_
#define __STUDENT_H_

// You can include library here
#include "vector.h"
#include <bits/stdc++.h>

template <typename T>
void CP::vector<T>::uniq(std::vector<CP::vector<T>::iterator> itrs) {
  // Write code here
  CP::vector<T> ans;
  sort(itrs.begin(),itrs.end());
  std::set<int> seen;
  std::map<int,T> m;
  for(auto &x : itrs){
    int a = x-begin();
    m[a] = *x;
  }
  int k= 0;
  for(int i =0;i<mSize;i++){
   if(m.count(i) && !seen.count(m[i])){
    seen.insert(m[i]);
    ans.push_back(mData[i]);
   }else{
    if(!seen.count(m[i])) {
      ans.push_back(mData[i]);
    }
   }
      
  }
  *this = ans;
}

#endif