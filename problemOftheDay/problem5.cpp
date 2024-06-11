#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    long long maxTip(int n, int x, int y, vector<int> &arr, vector<int> &brr) {
        // Create a vector of pairs to store the difference between tips and the index
        vector<pair<int, int>> diff(n);
        
        for (int i = 0; i < n; ++i) {
            diff[i] = {abs(arr[i] - brr[i]), i};
        }

        // Sort the orders based on the absolute difference in tips in descending order
        sort(diff.rbegin(), diff.rend());

        long long totalTip = 0;
        int aCount = 0, bCount = 0;

        // Assign orders based on the sorted differences
        for (int i = 0; i < n; ++i) {
            int index = diff[i].second;

            if (arr[index] >= brr[index]) {
                if (aCount < x) {
                    totalTip += arr[index];
                    aCount++;
                } else {
                    totalTip += brr[index];
                    bCount++;
                }
            } else {
                if (bCount < y) {
                    totalTip += brr[index];
                    bCount++;
                } else {
                    totalTip += arr[index];
                    aCount++;
                }
            }
        }

        return totalTip;
    }
};
