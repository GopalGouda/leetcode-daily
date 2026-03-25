// ✅ Problem: Partitioning Into Minimum Number Of Deci-Binary Numbers
// 🔗 Link: https://leetcode.com/problems/partitioning-into-minimum-number-of-deci-binary-numbers/description/
// 🗂 Topic: string
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minPartitions(string n) {
        int maxDigit = 0;

        for (char c : n) {
            maxDigit = max(maxDigit, c - '0');
        }

        return maxDigit;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
