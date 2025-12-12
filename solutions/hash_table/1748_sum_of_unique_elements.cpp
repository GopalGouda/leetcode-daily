// ✅ Problem: Sum of Unique Elements
// 🔗 Link: https://leetcode.com/problems/sum-of-unique-elements/description/?envType=problem-list-v2&envId=n8ahh1k5
// 🗂 Topic: hash_table
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(N)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int freq[101] = {0};

        for (int n : nums) {
            freq[n]++;
        }

        int sum = 0;
        for (int i = 1; i <= 100; i++) {
            if (freq[i] == 1) {
                sum += i;
            }
        }

        return sum;      
    }
};


int main() {
    Solution sol;
    // Test cases
    return 0;
}
