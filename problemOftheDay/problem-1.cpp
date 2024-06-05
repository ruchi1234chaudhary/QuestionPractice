//Given an integer array(0-based indexing) a of size n. Your task is to return the maximum value of the sum of i*a[i] for all 0<= i <=n-1, where a[i] is the element at index i in the array. The only operation allowed is to rotate(clockwise or counterclockwise) the array any number of times.

//Example 1:

//Input: n = 4, a[] = {8, 3, 1, 2}
// Output: 29
// Explanation: All the configurations possible by rotating the elements are:
// 3 1 2 8 here sum is 3*0+1*1+2*2+8*3 = 29
// 1 2 8 3 here sum is 1*0+2*1+8*2+3*3 = 27
// 2 8 3 1 here sum is 2*0+8*1+3*2+1*3 = 17
// 8 3 1 2 here sum is 8*0+3*1+1*2+2*3 = 11, so the maximum sum will be 29

class Solution {
public:
    long long max_sum(int a[], int n) {
          long long arrSum = 0;
        long long currSum = 0;

    // Calculating the array sum and currSum
        for (int i = 0; i < n; i++) {
        arrSum += a[i];
        currSum += (long long)i * a[i];
          }

        long long maxVal = currSum;

    // Calculating the maximum value by rotating the array
        for (int i = 1; i < n; i++) {
            currSum = currSum + arrSum -(long long)n * a[n - i];
            if (currSum > maxVal)
            maxVal = currSum;
            }

         return maxVal;
    }
};
