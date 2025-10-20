// ✅ Problem: Find the Sum of Encrypted Integers
// 🔗 Link: https://leetcode.com/problems/find-the-sum-of-encrypted-integers/description/?envType=problem-list-v2&envId=n8ahh1k5
// 🗂 Topic: arrays
// ⏱ Time Complexity: O()
// 💾 Space Complexity: O()
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        long long total = 0;
        for (int x : nums) {
            int num = x;
            if (num == 0) {
                total += 0;
                continue;
            }

            int maxDigit = 0;
            int len = 0;
            int tmp = num;
            while (tmp > 0) {
                int d = tmp % 10;
                if (d > maxDigit) maxDigit = d;
                tmp /= 10;
                ++len;
            }


            long long rep = 0;
            for (int i = 0; i < len; ++i) {
                rep = rep * 10 + 1;
            }

            long long encrypted = (long long)maxDigit * rep;
            total += encrypted;
        }
        return total;
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
