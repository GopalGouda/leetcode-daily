// ✅ Problem: Divide Array Into Equal Pairs
// 🔗 Link: https://leetcode.com/problems/divide-array-into-equal-pairs/description/?envType=problem-list-v2&envId=bit-manipulation
// 🗂 Topic: bit_manipulation
// ⏱ Time Complexity: O(.)
// 💾 Space Complexity: O(.)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int,int> freq;
        for (int x : nums) freq[x]++;
        for (auto &p : freq) {
            if (p.second % 2 != 0) return false;
        }
        return true;
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
