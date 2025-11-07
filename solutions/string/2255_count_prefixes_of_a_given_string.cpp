// ✅ Problem: Count Prefixes of a Given String
// 🔗 Link: https://leetcode.com/problems/count-prefixes-of-a-given-string/description/?envType=problem-list-v2&envId=n8ahh1k5
// 🗂 Topic: string
// ⏱ Time Complexity:  O(N*M)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
    int count = 0;
        for (auto& word : words) {
            if (s.rfind(word, 0) == 0) {
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
