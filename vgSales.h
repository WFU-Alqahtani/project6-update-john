//
// Created by jahob on 4/7/2020.
//

#ifndef BINARYINSERTIONSORT_VGSALES_H
#define BINARYINSERTIONSORT_VGSALES_H
#include "Node.h"



class vgSales
{
    string game; //key for sorting

public:

    vgSales(string g){
        game = g;
    }

};

//overloader to print out the vector
bool operator<<(const vgSales& cout, const vgSales& v){}

#endif //BINARYINSERTIONSORT_VGSALES_H
