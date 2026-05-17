// ✅ Problem: Divide a String Into Groups of Size k
// 🔗 Link: https://leetcode.com/problems/divide-a-string-into-groups-of-size-k/description/
// 🗂 Topic: string
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(n)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> ans;

        for (int i = 0; i < s.size(); i += k) {
            string group = s.substr(i, k);

            // Fill the last group if needed
            while (group.size() < k) {
                group += fill;
            }

            ans.push_back(group);
        }

        return ans;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
