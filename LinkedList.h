//
// Created by sarra on 3/30/2020.
//

#ifndef BINARYINSERTIONSORT_LINKEDLIST_H
#define BINARYINSERTIONSORT_LINKEDLIST_H

#include "Node.h"
#include <iostream>
using namespace std;

class LinkedList{

public:
    //Constructors
    LinkedList();
    LinkedList(const LinkedList & list);

    //Assignment Operator
    LinkedList &operator=(const LinkedList & rhs);

    //Destructor
    ~LinkedList();

    //Functions. You may not need to use them all
    void importList();
    void append(vgSales obj);
    bool Delete (vgSales obj);
    vgSales find (vgSales obj)
    void printList();
    void InsertionSort();

private:
    Node* head;
};

#endif //BINARYINSERTIONSORT_LINKEDLIST_H