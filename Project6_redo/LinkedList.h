//
// Created by jahob on 4/9/2020.
//

#ifndef PROJECT6_REDO_LINKEDLIST_H
#define PROJECT6_REDO_LINKEDLIST_H
#include "vgSales.h"
#include "Node.h"
#include <iostream>

class LinkedList {

public:

    //constructors
    LinkedList();
    LinkedList(const LinkedList & list);

    //Assignment Operator
    LinkedList &operator=(const LinkedList & rhs);

    //Destructor
    ~LinkedList();

    //Functions
    void importList();
    void append(vgSales obj);
    bool Delete (vgSales obj);
    vgSales find (vgSales obj)
    void printList();
    void InsertionSort();

private:
    Node* head;

};


#endif //PROJECT6_REDO_LINKEDLIST_H
