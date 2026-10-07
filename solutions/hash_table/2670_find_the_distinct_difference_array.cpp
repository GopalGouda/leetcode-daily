// ✅ Problem: Find the Distinct Difference Array
// 🔗 Link: https://leetcode.com/problems/find-the-distinct-difference-array/description/
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
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> diff(n);
        vector<int> suffix(n + 1, 0);

        // Count distinct elements in prefix and suffix
        unordered_set<int> st;

        // Count distinct elements in suffix
        for (int i = n - 1; i >= 0; i--) {
            st.insert(nums[i]);
            suffix[i] = st.size();
        }

        // Count distinct elements in prefix
        st.clear();

        for (int i = 0; i < n; i++) {
            st.insert(nums[i]);

            int prefixCount = st.size();
            int suffixCount = suffix[i + 1];

            diff[i] = prefixCount - suffixCount;
        }

        return diff;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
