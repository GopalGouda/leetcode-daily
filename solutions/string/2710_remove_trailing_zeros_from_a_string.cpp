// ✅ Problem: Remove Trailing Zeros From a String
// 🔗 Link: https://leetcode.com/problems/remove-trailing-zeros-from-a-string/description/
// 🗂 Topic: string
// ⏱ Time Complexity: O()
// 💾 Space Complexity: O()
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    string removeTrailingZeros(string num) {
        int i = num.size() - 1;

        // Move left while we see trailing zeros
        while (i >= 0 && num[i] == '0') {
            i--;
        }

        // Return substring without trailing zeros
        return num.substr(0, i + 1);        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
