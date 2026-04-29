// ✅ Problem: Search in Rotated Sorted Array
// 🔗 Link: https://leetcode.com/problems/search-in-rotated-sorted-array/description/
// 🗂 Topic: binary_search
// ⏱ Time Complexity: O(log n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: Binary Search

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0, high=n-1, mid;
        int pivot; //To store the smallest value

        // First find the pivot
        while(low<high){
            mid=low+(high-low)/2;
            if(nums[mid]>nums[high]) low= mid+1;
            else high=mid;
        }
        pivot=low;

        // now find which part may have the target
        low=0, high=n-1; //reset the points
        if(target>=nums[pivot] && target<= nums[high]) low= pivot;
        else high= pivot -1;

        //now find the target
        while(low<=high){
            mid= low+(high-low)/2;
            if(target==nums[mid]) return mid;
            else if(target<nums[mid]) high= mid-1;
            else low=mid+1;
        }
        return -1;
    }
};

int main() {
    Solution sol;
    int target=0;
    vector <int> nums;
    nums.push_back(4);
    nums.push_back(5);
    nums.push_back(6);
    nums.push_back(7);
    nums.push_back(0);
    nums.push_back(1);
    nums.push_back(2);

    int ans=sol.search(nums,target);
    cout<<ans;
    return 0;
}
