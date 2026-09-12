// ✅ Problem: Separate the Digits in an Array
// 🔗 Link: https://leetcode.com/problems/separate-the-digits-in-an-array/description/
// 🗂 Topic: arrays
// ⏱ Time Complexity: O(n*m)
// 💾 Space Complexity: O(n)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> answer;

        for (int num : nums) {
            string s = to_string(num);

            for (char c : s) {
                answer.push_back(c - '0');
            }
        }

        return answer;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
