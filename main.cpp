#include <vector>
#include <iostream>
#include "vectors.h"
#include "optimism.h"
#include "fusion.h"
#include "pairwise.h"

void print_vector(std::vector<int> v);

int main()
{
    // task A
    std::vector<int> v0 = makeVector(10);
    print_vector(v0);
    std::cout << ": should be [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]" << std::endl;

    // task B
    std::vector<int> v1{1,2,-1,3,4,-1,6};
    std::vector<int> v2 = goodVibes(v1);
    print_vector(v2);
    std::cout << ": should be [1, 2, 3, 4, 6]" << std::endl;
    
    // task C
    std::vector<int> v3{1,2,3};
    std::vector<int> v4{4,5};
    gogeta(v3, v4);
    print_vector(v3);
    std::cout << ": should be [1, 2, 3, 4, 5]" << std::endl;
    print_vector(v4);
    std::cout << ": should be []" << std::endl;

    // task D
    std::vector<int> v5{1,2,3};
    std::vector<int> v6{4,5};
    std::vector<int> v7 = sumPairWise(v5, v6); // returns [5, 7, 3]
    print_vector(v7);
    std::cout << ": should be [5, 7, 3]" << std::endl;

    return 0;
}

void print_vector(std::vector<int> v) {
    std::cout << "[";
    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i];
        if (i != v.size() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "]";
}