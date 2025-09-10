// ✅ Problem: Third Maximum Number
// 🔗 Link: https://leetcode.com/problems/third-maximum-number/description/?envType=problem-list-v2&envId=n8ahh1k5
// 🗂 Topic: arrays
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set <int> vec(nums.begin(), nums.end()); //eleminate duplicate using set;
        if(vec.size()<3) return *vec.rbegin();

        //else erase last two largest number;
        vec.erase(*vec.rbegin());
        vec.erase(*vec.rbegin());
        
        return *vec.rbegin();
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
