// ✅ Problem: Split the Array
// 🔗 Link: https://leetcode.com/problems/split-the-array/description/
// 🗂 Topic: hash_table
// ⏱ Time Complexity: O()
// 💾 Space Complexity: O()
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        unordered_map<int, int> freq;

        for (int x : nums) {
            freq[x]++;

            if (freq[x] > 2)
                return false;
        }

        return true;

    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
