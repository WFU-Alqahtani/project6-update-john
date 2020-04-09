#include <iostream>
#include <vector>
#include <cassert>
#include <fstream>
#include "vgSales.h"
#include "BinaryInsertionSort.h"
using namespace std;

void printVector(const vector<vgSales>&);


int main() {

    ifstream inFile;
    inFile.open("vgsales.csv");


    vector<vgSales> v;

    while(!inFile.eof()){
        string tmp;
        getline(inFile,tmp);
        vgSales game(tmp);
        v.push_back(game);
    }
    inFile.close();
    //printVector(v);

    //insertionSort(v,v.size());


    return 0;
}


//a print function to test input is working correctly
void printVector(const vector<vgSales>& v){

    for(unsigned int i=0;i<v.size();i++){
        cout << "Game Name: " << v[i].getName() << endl;
    }

}