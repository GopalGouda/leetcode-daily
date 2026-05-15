// ✅ Problem: Number of Segments in a String
// 🔗 Link: https://leetcode.com/problems/number-of-segments-in-a-string/description/
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
    int countSegments(string s) {
        int count = 0;

        for (int i = 0; i < s.size(); i++) {
            // Start of a new segment
            if (s[i] != ' ' && (i == 0 || s[i - 1] == ' ')) {
                count++;
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
