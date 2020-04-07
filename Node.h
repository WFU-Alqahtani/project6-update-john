#ifndef NODE_H
#define NODE_H
#include "LinkedList.h"

class Node {
public:
    // Node constructor
    Node(vgsales v , Node* n = nullptr)
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

    vgsales value;
    Node* next;

};

#endif //NODE_H
