// ✅ Problem: Contiguous Array
// 🔗 Link: https://leetcode.com/problems/contiguous-array/description/
// 🗂 Topic: hash_table
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(n)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> mp;
        mp[0] = -1;

        int count = 0;
        int maxLength = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                count++;
            } else {
                count--;
            }

            if (mp.find(count) != mp.end()) {
                maxLength = max(maxLength, i - mp[count]);
            } else {
                mp[count] = i;
            }
        }

        return maxLength;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
