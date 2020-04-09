//
// Created by jahob on 4/9/2020.
//

#ifndef PROJECT6_REDO_VGSALES_H
#define PROJECT6_REDO_VGSALES_H
#include <string>
using namespace std;

class vgSales {

    string name;

public:

    //default constructor
    vgSales();

    //overload constructors
    vgSales(string);

    //destructor
    ~vgSales();

    //Accessors
    string getName() const;

    //mutators
    void setName(string);

    bool operator>(const vgSales& a);
    bool operator==(const vgSales& a);
    bool operator<=(const vgSales& a);


private:



};


#endif //PROJECT6_REDO_VGSALES_H
