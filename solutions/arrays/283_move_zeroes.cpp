// ✅ Problem: Move Zeroes
// 🔗 Link: https://leetcode.com/problems/move-zeroes/description/
// 🗂 Topic: arrays
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(1)
// 🧠 Approach: Move the non-zeroes to begining and fill the remaining with zeroes

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
       int insertPosition=0; //next position to put a non-zero value
       for(int i=0; i<n; i++){
        if(nums[i]!=0){
           nums[insertPosition]=nums[i];
           insertPosition++;
        }
       }
       // Fill the rest with 0s
       for(int i=insertPosition; i<n; i++){
        nums[i]=0;
       }
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
