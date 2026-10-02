// ✅ Problem: Distribute Elements Into Two Arrays I
// 🔗 Link: https://leetcode.com/problems/distribute-elements-into-two-arrays-i/description/
// 🗂 Topic: two_pointers
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(n)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> arr1, arr2;

        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);

        for (int i = 2; i < nums.size(); i++) {
            if (arr1.back() > arr2.back()) {
                arr1.push_back(nums[i]);
            } else {
                arr2.push_back(nums[i]);
            }
        }

        // Concatenate arr2 to arr1
        arr1.insert(arr1.end(), arr2.begin(), arr2.end());

        return arr1;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
