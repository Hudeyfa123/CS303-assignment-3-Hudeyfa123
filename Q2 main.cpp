#include "Search.h"
#include <iostream>
#include <vector>

int main() {
    // Sample vector with multiple occurrences of target value
    std::vector<int> items = {1, 2, 3, 4, 2, 5, 2};
    int target = 2;

    // Perform the search for the last occurrence of the target
    int index = linear_search_last(items, target, items.size() - 1);

    // Output the result
    if (index != -1) {
        std::cout << "Last occurrence of " << target << " is at index: " << index << std::endl;
    } else {
        std::cout << target << " not found in the vector." << std::endl;
    }

    return 0;
}
