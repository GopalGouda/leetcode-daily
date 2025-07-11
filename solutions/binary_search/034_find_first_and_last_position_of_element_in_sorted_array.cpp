// ✅ Problem: Find First and Last Position of Element in Sorted Array
// 🔗 Link: https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/
// 🗂 Topic: binary search
// ⏱ Time Complexity: O(log n)
// 💾 Space Complexity: O(1)
// 🧠 Approach:  Binary Search for First and Last Occurrence

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector <int> result(2,-1); //vector to store result
        int n=nums.size();
        int low=0, high=n-1, mid;

        // Loop to find the first posion
        while(low<=high){
            mid=low+(high-low)/2;
            if(nums[mid]==target){
                if(mid==0 || nums[mid-1]!=target){
                    result[0]=mid;
                    break;
                }else high=mid-1;
            }
            else if(nums[mid]<target) low=mid+1;
            else high=mid-1;
        }

        //Loop to find the last position
        low=0, high=n-1;
        while(low<=high){
            mid= low+(high-low)/2;
            if(nums[mid]==target){
                if(mid==n-1 || nums[mid+1]!=target){
                    result[1]=mid;
                    break;
                } else low=mid+1;
            }
            else if(nums[mid]<target) low=mid+1;
            else high= mid-1;
        }
        return result;
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
