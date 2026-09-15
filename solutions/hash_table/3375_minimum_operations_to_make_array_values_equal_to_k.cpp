// ✅ Problem: Minimum Operations to Make Array Values Equal to K
// 🔗 Link: https://leetcode.com/problems/minimum-operations-to-make-array-values-equal-to-k/description/
// 🗂 Topic: hash_table
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(n)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        unordered_set<int> st;

        for (int x : nums) {
            if (x < k)
                return -1;

            if (x > k)
                st.insert(x);
        }

        return st.size();        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
