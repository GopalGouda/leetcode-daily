// ✅ Problem: Count Hills and Valleys in an Array
// 🔗 Link: https://leetcode.com/problems/count-hills-and-valleys-in-an-array/description/
// 🗂 Topic: arrays
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(N)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int countHillValley(vector<int>& nums) {

        //remove the duplicates
        vector<int> arr;
        arr.push_back(nums[0]);
        for(int i=1; i<nums.size(); ++i){
            if(nums[i] != nums[i-1]) arr.push_back(nums[i]);
        }
        int count=0; // store the answer

        for(int i=1; i<arr.size()-1; i++){
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1]) count++; //hill
            if(arr[i]<arr[i-1] && arr[i]<arr[i+1]) count++; //vally
        }
        return count;
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
