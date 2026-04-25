// ✅ Problem: Increasing Decreasing String
// 🔗 Link: Increasing Decreasing String
// 🗂 Topic: hash_table
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    string sortString(string s) {
        vector<int> count(26, 0);

        // Count frequency
        for (char c : s) {
            count[c - 'a']++;
        }

        string result = "";

        while (result.size() < s.size()) {
            // Increasing (a → z)
            for (int i = 0; i < 26; i++) {
                if (count[i] > 0) {
                    result += char(i + 'a');
                    count[i]--;
                }
            }

            // Decreasing (z → a)
            for (int i = 25; i >= 0; i--) {
                if (count[i] > 0) {
                    result += char(i + 'a');
                    count[i]--;
                }
            }
        }

        return result;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
