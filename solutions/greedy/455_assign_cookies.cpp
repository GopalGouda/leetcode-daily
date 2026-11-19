// ✅ Problem: Assign Cookies
// 🔗 Link: https://leetcode.com/problems/assign-cookies/description/
// 🗂 Topic: greedy
// ⏱ Time Complexity: O(nlogn + mlogm) where n is the number of children and m is the number of cookies
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int i = 0; // Children pointer
        int j = 0; // Cookies pointer

        while (i < g.size() && j < s.size()) {

            if (s[j] >= g[i]) {
                i++; // Child is satisfied
            }

            j++; // Move to next cookie
        }

        return i;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
