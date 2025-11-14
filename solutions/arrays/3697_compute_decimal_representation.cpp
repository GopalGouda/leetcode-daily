// ✅ Problem: Compute Decimal Representation
// 🔗 Link: https://leetcode.com/problems/compute-decimal-representation/description/?envType=problem-list-v2&envId=n8ahh1k5
// 🗂 Topic: arrays
// ⏱ Time Complexity: O(N log N)
// 💾 Space Complexity: O(N)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        vector<int> result;
        long long power = 1;

        while (n > 0) {
            int digit = n % 10;
            if (digit > 0) {
                result.push_back(digit * power);
            }
            n /= 10;
            power *= 10;
        }

        sort(result.rbegin(), result.rend());
        return result;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
