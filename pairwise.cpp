#include <vector>
#include "pairwise.h"

std::vector<int> sumPairWise(const std::vector<int> &v1, const std::vector<int> &v2) {
    /*
    Function returns a vector of integers whose elements are the pairwise sum of the elements 
    from the two vectors passed as arguments. 
    If a vector has a smaller size than the other, consider extra entries from the shorter vectors as 0. 
    */
    
    std::vector<int> v3;
    if (v1.size() > v2.size()) {
        for (int i = 0; i < v2.size(); i++) {
            v3.push_back(v1[i] + v2[i]);
        }
        for (int i = v2.size(); i < v1.size(); i++) {
            v3.push_back(v1[i]);
        }
    } else {
        for (int i = 0; i < v1.size(); i++) {
            v3.push_back(v1[i] + v2[i]);
        }
        for (int i = v1.size(); i < v2.size(); i++) {
            v3.push_back(v2[i]);
        }
    }
    return v3;
}