#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "vectors.h"
#include "optimism.h"
#include "fusion.h"
#include "pairwise.h"
#include <vector>

TEST_CASE("makeVector(int n)") {
    std::vector<int> v = {0, 1, 2, 3, 4};
    CHECK(makeVector(5) == v);
    v = {0};
    CHECK(makeVector(1) == v);
    v = {};
    CHECK(makeVector(0) == v);
    CHECK(makeVector(-1) == v);
}

TEST_CASE("goodVibes(vector)-> remove negative ints") {
    std::vector<int> v1 = {-1, 3, -8, 0, 50, 2, -50};
    std::vector<int> v2 = {3, 0, 50, 2};
    CHECK(goodVibes(v1) == v2);
    v1 = {1, 2, 6};
    CHECK(goodVibes(v1) == v1);
    v1 = {-1, -2, -9};
    v2 = {};
    CHECK(goodVibes(v1) == v2);
    v1 = {};
    CHECK(goodVibes(v1) == v2);
}

TEST_CASE("gogeta(v1, v2)-> appends v2 to v1, empties v2") {
    std::vector<int> v1{-1, 2, 0, 3, 4};
    std::vector<int> v2{4, -5, 6};
    std::vector<int> v3{-1, 2, 0, 3, 4, 4, -5, 6};
    std::vector<int> empty_v{};
    gogeta(v1, v2);
    CHECK(v1 == v3);
    CHECK(v2 == empty_v);

    v1 = {};
    v2 = {700};
    v3 = {700};
    gogeta(v1, v2);
    CHECK(v1 == v3);

    v1 = {0, 0, -4};
    v3 = {0, 0, -4};
    gogeta(v1, empty_v);
    CHECK(v1 == v3);
}

TEST_CASE("sumPairWise(v1, v2)") {
    std::vector<int> v1{1, 2, 3};
    std::vector<int> v2{3, 2, 1};
    std::vector<int> v3{4, 4, 4};
    CHECK(sumPairWise(v1, v2) == v3);

    v1 = {-3, 7, 0, 9};
    v2 = {3, -2, 6};
    v3 = {0, 5, 6, 9};
    CHECK(sumPairWise(v1, v2) == v3);

    v1 = {9, 4};
    v2 = {9, 9, 9, -9, 9, 9};
    v3 = {18, 13, 9, -9, 9, 9};
    CHECK(sumPairWise(v1, v2) == v3);

    v1 = {1};
    v2 = {};
    v3 = {1};
    CHECK(sumPairWise(v1, v2) == v3);
    v1 = {};
    v2 = {3, 4};
    v3 = {3, 4};
    CHECK(sumPairWise(v1, v2) == v3);
    v1 = {};
    v2 = {};
    v3 = {};
    CHECK(sumPairWise(v1, v2) == v3);

}