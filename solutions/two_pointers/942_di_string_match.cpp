// ✅ Problem: DI String Match
// 🔗 Link: https://leetcode.com/problems/di-string-match/description/
// 🗂 Topic: two_pointers
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> diStringMatch(string s) {
int n = s.size();
        vector<int> ans;

        int low = 0, high = n;

        for (char c : s) {
            if (c == 'I') {
                ans.push_back(low++);
            } else {
                ans.push_back(high--);
            }
        }

        // One number left
        ans.push_back(low);

        return ans;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
