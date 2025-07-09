// ✅ Problem: Binary Search
// 🔗 Link: https://leetcode.com/problems/binary-search/submissions/1691862578/
// 🗂 Topic: Binary Search
// ⏱ Time Complexity: O(log n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: Divide the array into two part each time and check with target

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0; //starting point
        int high= nums.size()-1; //end point
        int mid; //used to find the middle index
        while(low<=high){
            mid=low+(high-low)/2; //find the middle one
            if(nums[mid]==target) return mid; 
            else if(nums[mid]<target){ 
                low=mid+1; 
            }else{
                high=mid-1;
            }
        }
        return -1;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {-1, 0, 3, 5, 9, 12};
    int target = 9;
    int index = sol.search(nums, target);
    cout << "Index: " << index << endl;
    return 0;
}
