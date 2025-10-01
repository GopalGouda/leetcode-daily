// ✅ Problem: Find if Digit Game Can Be Won
// 🔗 Link: https://leetcode.com/problems/find-if-digit-game-can-be-won/description/?envType=problem-list-v2&envId=n8ahh1k5
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
    bool canAliceWin(vector<int>& nums) {
        int SumSingle=0;
        int SumDouble=0;
        for(int x: nums){
            if(x<=9) SumSingle+=x;
            else SumDouble+=x;
        }
        return SumSingle!=SumDouble;
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
