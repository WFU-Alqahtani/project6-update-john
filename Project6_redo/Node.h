//
// Created by jahob on 4/9/2020.
//

#ifndef PROJECT6_REDO_NODE_H
#define PROJECT6_REDO_NODE_H
#include "LinkedList.h"
#include "vgSales.h"

class Node {


public:
    // Node constructor
    Node( vgSales v , Node* n = nullptr)
    {
        value = v;
        next = n;
    }

    // node destructor
    ~Node(){
        delete next;
    }
    friend class LinkedList;

private:

    vgSales value;
    Node* next;

};



#endif //PROJECT6_REDO_NODE_H
