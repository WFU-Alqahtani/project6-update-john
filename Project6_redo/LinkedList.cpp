//
// Created by jahob on 4/9/2020.
//

#include "LinkedList.h"
#include <iostream>
#include <fstream>
using namespace std;


//constructor
LinkedList::LinkedList(){
    head = nullptr;
}

//copy constructor
LinkedList::LinkedList(const LinkedList& list){
    LinkedList newList = *new LinkedList(list);
}

//destructor
LinkedList::~LinkedList(){
}

//assignment operator
/*
LinkedList &operator=(const LinkedList & rhs){
    return //
}
 */

void LinkedList::importList(){
    ifstream inFile;
    inFile.open("vgsales.csv");



    while(!inFile.eof()){
        string tmp;
        getline(inFile,tmp);
        vgSales game(tmp);
        v.push_back(game);
    }
    inFile.close();

}