// ✅ Problem: Average Value of Even Numbers That Are Divisible by Three
// 🔗 Link: https://leetcode.com/problems/average-value-of-even-numbers-that-are-divisible-by-three/description/?envType=problem-list-v2&envId=n8ahh1k5
// 🗂 Topic: arrays
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int averageValue(vector<int>& nums) {

        if(nums.size()==0) return 0;
        int count=0;
        int sum=0;
        int avg;

        for(int i : nums){
            if(i % 6 == 0){
                sum+=i;
                count++;
            }
        }
        if(count==0) return 0;
        avg= (sum/count);
        return avg;
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
