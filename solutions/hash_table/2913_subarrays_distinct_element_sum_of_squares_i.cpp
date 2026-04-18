// ✅ Problem: Subarrays Distinct Element Sum of Squares I
// 🔗 Link: https://leetcode.com/problems/subarrays-distinct-element-sum-of-squares-i/description/
// 🗂 Topic: hash_table
// ⏱ Time Complexity: O(n^2)
// 💾 Space Complexity: O(n)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int sumCounts(vector<int>& nums) {
    int n = nums.size();
    long long result = 0;

    for (int i = 0; i < n; i++) {
        unordered_set<int> distinctSet;

        for (int j = i; j < n; j++) {
            distinctSet.insert(nums[j]);
            int k = distinctSet.size();
            result += (long long)k * k;
        }
    }

    return result;
}

int main() {
    vector<int> nums = {1, 2, 1};
    cout << sumCounts(nums) << endl;  // Output: 15
    return 0;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
