
#ifndef NODE_H
#define NODE_H
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

    //Destructor
    ~Node(){
        delete next;
    }
    friend class LinkedList;
private:

    vgSales value;
    Node* next;

};

#endif //NODE_H
