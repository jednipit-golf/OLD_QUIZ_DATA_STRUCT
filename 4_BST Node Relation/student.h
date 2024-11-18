#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "map_bst.h"

namespace CP {

template <typename KeyT, typename MappedT, typename CompareT>
int CP::map_bst<KeyT, MappedT, CompareT>::node_relation(iterator it1, iterator it2) {
    node * p1;
    node * p2;
    node * a1 = find_node(it1->first,mRoot,p1);
    node * a2 = find_node(it2->first,mRoot,p2);
    if(a1 == a2) return 2;
    if(a1->parent == a2 && a1->parent != NULL) return 1;
    if(a2->parent == a1 && a2->parent != NULL) return 1;
    if (a1 == mRoot || a2 == mRoot) return 2;
    auto tmp1 = a1;
    auto tmp2 = a2;
    while(tmp1 != NULL){
        p1 = tmp1->parent;
        if(p1 == a2 && p1 != NULL) return 2;
        tmp1 = p1;
    }
    while(tmp2 != NULL){
        p2 = tmp2->parent;
        if(p2 == a1 && p2 != NULL) return 2;
        tmp2 = p2;
    }
    p1 = a1;
    p2 = a2;
    while(p1 != NULL && p2 != NULL){
        p1 = p1->parent;
        p2 = p2->parent;
    }
    if(p1 == NULL && p2 == NULL) return 4;
    return 3;
    }

}

#endif
