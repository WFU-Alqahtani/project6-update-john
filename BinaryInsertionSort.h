#ifndef BINARYINSERTIONSORT_H
#define BINARYINSERTIONSORT_H
#include "vgSales.h"

#include <vector>
using namespace std;

// greater than operator for two vgSales objects
bool operator>(const vgSales& item, const vgSales&){}
// equality operator for two vgSales objects
bool operator==(const vgSales& item, const vgSales&){}

bool operator<=(const vgSales& item, const vgSales&){}


int binarySearch(vector<vgSales> a, int item, int low, int high);
void insertionSort(vector<vgSales> &a, int n);

#endif //BINARYINSERTIONSORT_H
