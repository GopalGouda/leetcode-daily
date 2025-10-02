// ✅ Problem: Find Numbers with Even Number of Digits
// 🔗 Link: https://leetcode.com/problems/find-numbers-with-even-number-of-digits/description/?envType=problem-list-v2&envId=n8ahh1k5
// 🗂 Topic: arrays
// ⏱ Time Complexity: O(N*K)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans=0;
        for(int x: nums){
            int temp=x;
            int count=0;
            while(temp>0){
                temp/=10;
                count++;
            }
            if(count%2==0) ans++;
        }
        return ans;
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
