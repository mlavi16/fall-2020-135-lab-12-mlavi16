#include <vector>
#include "fusion.h"

void gogeta(std::vector<int> &goku, std::vector<int> &vegeta) {
    // Appends elements of the second vector into the first 
    // and empties the second vector.

    for (int i = 0; i < vegeta.size(); i++) {
        goku.push_back(vegeta[i]);
    }
    vegeta.clear();
}