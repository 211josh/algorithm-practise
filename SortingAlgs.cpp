/// ALL FUNCTIONS FOR SORTING ALGORITHMS

#include <iostream>
#include "SortingAlgs.h"

// BUBBLESORT
void Sorting::bubbleSort(std::vector<int>& nums){
    for(int i = 0; i < nums.size(); i++){
        for(int j = 0; j < nums.size() - i - 1; j++){
            if(nums[j] > nums[j+1]){
                std::swap(nums[j], nums[j+1]);
            }
        }
    }
    printVector(nums);
}

// SELECTION SORT
void Sorting::selectionSort(std::vector<int>& nums){
    for(int i = 0; i < nums.size(); i++){
        int selected = i;
        for(int j = i; j < nums.size(); j++){
            if(nums[j] < nums[selected]){
                selected = j;
            }
        }
        std::swap(nums[i], nums[selected]);
    }
    printVector(nums);
}



void Sorting::printVector(std::vector<int> nums){
    for(int i = 0; i < nums.size(); i++){
        std::cout << nums[i] << " ";
    }
    std::cout << " " << std::endl;
}
