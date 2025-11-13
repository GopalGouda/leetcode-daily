// ✅ Problem: Shuffle String
// 🔗 Link: https://leetcode.com/problems/shuffle-string/description/?envType=problem-list-v2&envId=n8ahh1k5
// 🗂 Topic: string
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(N)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string result(s.size(), ' ');
        for (int i = 0; i < s.size(); ++i) {
            result[indices[i]] = s[i];
        }
        return result;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
