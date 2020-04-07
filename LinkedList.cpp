//
// Created by sarra on 3/30/2020.
//
#include "LinkedList.h"
#include <iostream>
using namespace std

LinkedList::LinkedList(){
    value = v;
    next = nullptr;
}


void LinkedList::importList()
{
    Node* head = new Node()
    Node* current = head;
    ifstream inFile;
    string filename = "vgsales.csv";
    inFile.open(filename);


}