// ✅ Problem: Count Elements With Strictly Smaller and Greater Elements 
// 🔗 Link: https://leetcode.com/problems/count-elements-with-strictly-smaller-and-greater-elements/
// 🗂 Topic: sorting
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int countElements(vector<int>& nums) {
        int mn = *min_element(nums.begin(), nums.end());
        int mx = *max_element(nums.begin(), nums.end());

        int count = 0;
        for (int num : nums) {
            if (num > mn && num < mx)
                count++;
        }

        return count;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
