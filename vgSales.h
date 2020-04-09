//
// Created by jahob on 4/7/2020.
//

#ifndef BINARYINSERTIONSORT_VGSALES_H
#define BINARYINSERTIONSORT_VGSALES_H
#include "Node.h"
//#include <string>
using namespace std;

class vgSales
{
    string game; //key for sorting

public:

    vgSales(string g){
        game = g;
    }

    friend ostream &operator<<( ostream &output, const vgSales &D ) {
        output << D.game;
        return output;
    }

};

#endif //BINARYINSERTIONSORT_VGSALES_H
