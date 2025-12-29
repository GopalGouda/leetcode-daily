// ✅ Problem: To Lower Case
// 🔗 Link: https://leetcode.com/problems/to-lower-case/description/
// 🗂 Topic: string
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(1)
// 🧠 Approach: Iterate through each character and convert to lowercase using tolower()

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    string toLowerCase(string s) {
        for (char &c : s) {
            c = tolower(c);
        }
        return s;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
