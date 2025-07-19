// ✅ Problem: Squares of a Sorted Array
// 🔗 Link: https://leetcode.com/problems/squares-of-a-sorted-array/description/
// 🗂 Topic: arrays
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(N)
// 🧠 Approach: Two pointer Approch

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector <int> result(n); //store the result
        int low=0, high=n-1; 
        long long lowsq, highsq; //They will store the squares of low and high
        int index=n-1; // It will use to store answer in result
        // we will store from high to low because may be -ve nums are there in 1st
        while(low<=high){
            lowsq= nums[low]*nums[low];
            highsq= nums[high]*nums[high];
            if(lowsq>highsq){ //It will store in order without sort function
                result[index--]= lowsq;
                low++;
            }else{
                result[index--]= highsq;
                high--;
            }
        }
        return result;
        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
