// ✅ Problem: Search Insert Position
// 🔗 Link: https://leetcode.com/problems/search-insert-position/description/
// 🗂 Topic: binary_search
// ⏱ Time Complexity: O(log n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: If the target does not exist, the loop exits when low > high, and low will point to the correct insert position.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n= nums.size();
        int low=0, high=n-1, mid;

        while(low<=high){
            mid=low+(high-low)/2;
            if(nums[mid]==target){
                return mid; // Return index if found the match
            }
            else if(nums[mid]<target) low= mid+1;
            else high=mid-1;
        }
        return low;
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
