#include <iostream>
#include <vector>
#include <unordered_map>


std::vector<int> twoSum(std::vector<int>& n, int t) {
    for (int i = 0; i < n.size(); i++) {
        for (int j = i + 1; j < n.size(); j++) {
            if (n[i] + n[j] == t) {
                return {i, j}; // Return the indices of the two numbers
            }
        }
    }
    return {}; // If no solution is found, return an empty vector
}

int main() {
    std::vector<int> n = {2, 7, 11, 15};
    int t = 9;

    std::vector<int> r = twoSum(n, t); // Call the twoSum function to find the indices of the numbers

    if (r.size() == 2) {
        std::cout << "Output: [" << r[0] << ", " << r[1] << "]" << std::endl; // Print the indices
    } else {
        std::cout << "No solution found." << std::endl; // Print a message if no solution is found
    }

    return 0;
}
