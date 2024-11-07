#include <vector>
#include <cstddef> // for size_t

// Recursive function to find the last occurrence of target in items
template <typename Item_Type>
int linear_search_last(const std::vector<Item_Type>& items, const Item_Type& target, size_t pos) {
    // Base case: if position is out of bounds, target not found
    if (pos == static_cast<size_t>(-1)) return -1;

    // If target is found at the current position, return this position
    if (items[pos] == target) return pos;

    // Recursive call to check the previous position in the vector
    return linear_search_last(items, target, pos - 1);
}
