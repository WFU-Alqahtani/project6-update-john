#include <iostream>
#include <vector>
#include <cassert>
#include <fstream>
#include "BinaryInsertionSort.h"
#include "Node.h"
#include"vgSales.h"
using namespace std;

int main() {

    //read the file name of your dataset
    ifstream inFile;
    inFile.open("vgsales.csv");


    // populate the vector with the data from your data set
   int i;
   vector<vgSales> v;

   while(!inFile.eof()){
       string tmp;
       getline(inFile, tmp);
       vgSales obj(tmp);
       v[i] = obj;
       i++;
   }

   inFile.close();
   // unit test
   for (int i = 0; i < v.size(); i++)
   {
       cout << v[i] << endl;
   }

    // binary insertion sort
    insertionSort(v, v.size());

    // check if sorted
    for (int i = 1; i < v.size(); i++) {
        assert(v[i-1] <= v[i]);
    }

    // print out sorted list
    for (int i = 0; i < v.size(); i++) {
        //you should override << to YourClass
        cout << v[i] << endl;
    }

    // FINISH ME


}

