#include <vector>
#include <iostream>

std::vector<int> makeVector(int n) {
    // Function returns a vector of n integers that range from 0 to n-1. 
    std::vector<int> v;
    for (int i = 0; i < n; i++) {
        v.push_back(i);
    }
    return v;
} 