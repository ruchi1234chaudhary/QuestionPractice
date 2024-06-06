// Given n integer ranges, the task is to return the maximum occurring integer in the given ranges. If more than one such integer exists, return the smallest one.
// The ranges are in two arrays l[] and r[].  l[i] consists of the starting point of the range and r[i] consists of the corresponding endpoint of the range & a maxx which is the maximum value of r[].

// For example, consider the following ranges.
// l[] = {2, 1, 3}, r[] = {5, 3, 9)
// Ranges represented by the above arrays are.
// [2, 5] = {2, 3, 4, 5}
// [1, 3] = {1, 2, 3}
// [3, 9] = {3, 4, 5, 6, 7, 8, 9}
// The maximum occurred integer in these ranges is 3.

#include <iostream>
#include <vector>

class Solution {
public:
    int maxOccured(int n, int l[], int r[], int maxx) {
        // Initialize the frequency array
        std::vector<int> freq(maxx + 2, 0);
        
        // Increment start points and decrement points right after end points
        for (int i = 0; i < n; ++i) {
            freq[l[i]] += 1;
            freq[r[i] + 1] -= 1;
        }
        
        // Calculate the prefix sum to get the actual counts
        int max_count = freq[0];
        int max_occurred = 0;
        
        for (int i = 1; i <= maxx; ++i) {
            freq[i] += freq[i - 1];
            if (freq[i] > max_count) {
                max_count = freq[i];
                max_occurred = i;
            }
        }
        
        return max_occurred;
    }
};

int main() {
    int n = 4;
    int l[] = {1, 4, 3, 1};
    int r[] = {15, 8, 5, 4};
    int maxx = 15;

    Solution solution;
    std::cout << "The maximum occurred integer is " << solution.maxOccured(n, l, r, maxx) << std::endl;

    return 0;
}
