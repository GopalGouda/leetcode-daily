// ✅ Problem: Shuffle the Array
// 🔗 Link: https://leetcode.com/problems/shuffle-the-array/description/?envType=problem-list-v2&envId=n8ahh1k5
// 🗂 Topic: arrays
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(N)
// 🧠 Approach: Two Pointers

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int size= nums.size();
        vector <int> ans(size);
        int j=0, k=n;
        for(int i=0; i<size; i++){
            if(i%2==0){
                ans[i]=nums[j];
                j++;
            }else{
                ans[i]=nums[k];
                k++;
            }
        }
        return ans;
        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
