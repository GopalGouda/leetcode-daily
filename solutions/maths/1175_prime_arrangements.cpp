// ✅ Problem: Prime Arrangements
// 🔗 Link: https://leetcode.com/problems/prime-arrangements/description/
// 🗂 Topic: maths
// ⏱ Time Complexity: O(n log log n)
// 💾 Space Complexity: O(n)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    const int MOD = 1e9 + 7;
    int numPrimeArrangements(int n) {
            vector<bool> prime(n + 1, true);
        prime[0] = prime[1] = false;

        for (int i = 2; i * i <= n; i++) {
            if (prime[i]) {
                for (int j = i * i; j <= n; j += i)
                    prime[j] = false;
            }
        }

        int cntPrime = 0;
        for (int i = 2; i <= n; i++)
            if (prime[i]) cntPrime++;

        long long ans = 1;

        for (int i = 2; i <= cntPrime; i++)
            ans = (ans * i) % MOD;

        for (int i = 2; i <= n - cntPrime; i++)
            ans = (ans * i) % MOD;

        return ans;    
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
