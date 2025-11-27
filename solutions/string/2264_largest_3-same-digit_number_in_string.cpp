// ✅ Problem: Largest 3-Same-Digit Number in String
// 🔗 Link: https://leetcode.com/problems/largest-3-same-digit-number-in-string/description/
// 🗂 Topic: string
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    string largestGoodInteger(string num) {
        string best = "";
        int n = num.size();

        for (int i = 0; i + 2 < n; i++) {
            if (num[i] == num[i+1] && num[i] == num[i+2]) {
                string candidate = num.substr(i, 3);
                if (candidate > best) {
                    best = candidate;
                }
            }
        }
        return best;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
