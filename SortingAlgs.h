/// ALL FUNCTIONS FOR SORTING ALGORITHMS

#ifndef SORTINGALGS_H_INCLUDED
#define SORTINGALGS_H_INCLUDED

#include <iostream>
#include <vector>

class Sorting{
public:
    void bubbleSort(std::vector<int>& nums);
    void selectionSort(std::vector<int>& nums);
    void insertionSort(std::vector<int>& nums);

private:
    void printVector(std::vector<int> nums);
};

#endif // SORTINGALGS_H_INCLUDED
