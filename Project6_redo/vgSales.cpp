//
// Created by jahob on 4/9/2020.
//

#include "vgSales.h"


vgSales::vgSales(){
    name = " ";
}

vgSales::vgSales(string n){
    name = n;
}

vgSales::~vgSales(){

}

string vgSales::getName() const {
    return name;
}

void vgSales::setName(string n){
    name = n;
}


// greater than operator for two vgSales objects
bool vgSales::operator>(const vgSales& a){
    return(name > a.name);
}
// equality operator for two vgSales objects
bool vgSales::operator==(const vgSales& a){
    return(name == a.name);
}

bool vgSales::operator<=(const vgSales& a){
    return(name <= a.name);
}