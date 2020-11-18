#include <vector>
#include "optimism.h"

std::vector<int> goodVibes(const std::vector<int> & v) {
    std::vector<int> new_v;
    for (int i = 0; i < (v.size() - 1); i++) {
        if (v[i] >= 0){
            new_v.push_back(v[i]);
        }
    }
    return new_v;
}