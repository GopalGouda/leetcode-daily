// ✅ Problem: Find Lucky Integer in an Array
// 🔗 Link: https://leetcode.com/problems/find-lucky-integer-in-an-array/description/
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
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> freq;

        // Count frequency of each number
        for (int num : arr) {
            freq[num]++;
        }

        int ans = -1;

        // Find the largest lucky integer
        for (auto& [num, count] : freq) {
            if (num == count) {
                ans = max(ans, num);
            }
        }

        return ans;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
