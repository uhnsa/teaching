#include <algorithm>
#include <cstdint>
#include <iostream>
#include <vector>


using i32 = int32_t;


void PrintVector(const std::vector<i32>& v) {
    std::cout << "data: ";
    for (const auto x: v) {
        std::cout << x << ' ';
    }
    std::cout << '\n';
}

/*
    std::sort is not stable. If you need a stable sort, use std::stable_sort
*/
int main() {
    std::vector<i32> v = {5, 1, 3, 4, 2};
    std::cout << "Before sorting:\n";
    PrintVector(v);
    std::stable_sort(v.begin(), v.end());
    std::cout << "After sorting:\n";
    PrintVector(v);

    return 0;
}
