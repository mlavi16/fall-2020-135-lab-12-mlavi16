#include <vector>
#include "optimism.h"

std::vector<int> goodVibes(const std::vector<int> & v) {
    // returns a vector with only the positive integers in the same order as the given vector.
    std::vector<int> new_v;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] >= 0){
            new_v.push_back(v[i]);
        }
    }
    return new_v;
}