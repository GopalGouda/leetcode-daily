// ✅ Problem: Count Digit Appearances
// 🔗 Link: https://leetcode.com/problems/count-digit-appearances/description/
// 🗂 Topic: string
// ⏱ Time Complexity: O(D)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        char target = '0' + digit;
        int count = 0;

        for (int num : nums) {
            string s = to_string(num);
            for (char c : s) {
                if (c == target) {
                    count++;
                }
            }
        }

        return count;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
