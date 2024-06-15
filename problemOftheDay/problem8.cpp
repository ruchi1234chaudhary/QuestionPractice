class Solution {
public:
    vector<int> getPrimes(int n) {
        // Step 1: Sieve of Eratosthenes to find all primes up to n
        vector<bool> isPrime(n+1, true);
        isPrime[0] = isPrime[1] = false;
        for (int i = 2; i <= sqrt(n); ++i) {
            if (isPrime[i]) {
                for (int j = i * i; j <= n; j += i) {
                    isPrime[j] = false;
                }
            }
        }
        
        // Step 2: Find the pair (a, b) such that a + b == n and both are primes
        for (int a = 2; a <= n / 2; ++a) {
            if (isPrime[a] && isPrime[n - a]) {
                return {a, n - a};
            }
        }
        
        // If no such pair is found, return [-1, -1]
        return {-1, -1};
    }
};
