// ✅ Problem: Shortest Distance to a Character
// 🔗 Link: https://leetcode.com/problems/shortest-distance-to-a-character/description/
// 🗂 Topic: arrays
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(N)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n = s.length();
        vector<int> answer(n);
        
        int prev = -n;  // initialize far left
        
        // First pass: Left → Right
        for (int i = 0; i < n; i++) {
            if (s[i] == c) {
                prev = i;
            }
            answer[i] = i - prev;
        }
        
        prev = 2 * n;  // initialize far right
        
        // Second pass: Right → Left
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == c) {
                prev = i;
            }
            answer[i] = min(answer[i], prev - i);
        }
        
        return answer;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
