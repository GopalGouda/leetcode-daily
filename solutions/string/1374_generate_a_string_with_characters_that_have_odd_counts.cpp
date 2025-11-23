// ✅ Problem: Generate a String With Characters That Have Odd Counts
// 🔗 Link: https://leetcode.com/problems/generate-a-string-with-characters-that-have-odd-counts/description/
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
    string generateTheString(int n) {
        if (n % 2 == 1) {
            return string(n, 'a');   // all 'a's
        } else {
            return string(n - 1, 'a') + 'b';   // n-1 'a's + 1 'b'
        }       
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
