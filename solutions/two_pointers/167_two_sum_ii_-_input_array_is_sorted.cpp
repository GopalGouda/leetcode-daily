// ✅ Problem: Two Sum II - Input Array Is Sorted
// 🔗 Link: https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/description/
// 🗂 Topic: two_pointers
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size() - 1;

        while (left < right) {

            int sum = numbers[left] + numbers[right];

            if (sum == target) {
                return {left + 1, right + 1};
            }
            else if (sum > target) {
                right--;
            }
            else {
                left++;
            }
        }

        return {-1, -1};        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
