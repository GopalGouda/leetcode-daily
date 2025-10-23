// ✅ Problem: Three Consecutive Odds
// 🔗 Link: https://leetcode.com/problems/three-consecutive-odds/description/?envType=problem-list-v2&envId=n8ahh1k5
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
    bool threeConsecutiveOdds(vector<int>& arr) {
        int count=0;
        for(int num:arr){
            if(num%2 !=0){
                count++;
                if(count==3) return true;
            }else count=0;

        }
        return false;
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
