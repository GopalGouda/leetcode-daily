// ✅ Problem: Set Mismatch
// 🔗 Link: https://leetcode.com/problems/set-mismatch/description/?envType=problem-list-v2&envId=bit-manipulation
// 🗂 Topic: maths
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(1)
// 🧠 Approach: Basic Maths

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        long long n = nums.size();
        long long S = n * (n + 1) / 2;               // expected sum
        long long P = n * (n + 1) * (2 * n + 1) / 6; // expected sum of squares
        
        long long sum_nums = 0, sum_sq_nums = 0;
        for (long long num : nums) {
            sum_nums += num;
            sum_sq_nums += (long long)num * num;
        }
        
        long long diff1 = sum_nums - S;          // dup - miss
        long long diff2 = sum_sq_nums - P;       // dup^2 - miss^2
        
        long long sum_dup_miss = diff2 / diff1;  // dup + miss
        
        long long dup = (diff1 + sum_dup_miss) / 2;
        long long miss = dup - diff1;
        
        return {(int)dup, (int)miss};
    }
};


int main() {
    Solution sol;
    // Test cases
    return 0;
}
