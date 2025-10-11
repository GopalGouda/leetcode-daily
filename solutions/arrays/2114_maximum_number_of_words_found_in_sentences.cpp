// ✅ Problem: Maximum Number of Words Found in Sentences
// 🔗 Link: https://leetcode.com/problems/maximum-number-of-words-found-in-sentences/description/?envType=problem-list-v2&envId=n8ahh1k5
// 🗂 Topic: arrays
// ⏱ Time Complexity: O(N*M)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxWords = 0;
        for (auto& sentence : sentences) {
            int count = 1; // at least one word in each sentence
            for (char c : sentence) {
                if (c == ' ')
                    count++;
            }
            maxWords = max(maxWords, count);
        }
        return maxWords;
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
