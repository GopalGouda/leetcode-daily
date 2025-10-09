// ✅ Problem: Find Words Containing Character
// 🔗 Link: https://leetcode.com/problems/find-words-containing-character/description/?envType=problem-list-v2&envId=n8ahh1k5
// 🗂 Topic: arrays
// ⏱ Time Complexity: O(N*K)
// 💾 Space Complexity: O()
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
            vector<int> result;
    for (int i = 0; i < words.size(); i++) {
        if (words[i].find(x) != string::npos) {
            result.push_back(i);
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
