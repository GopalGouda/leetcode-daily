// ✅ Problem: Truncate Sentence
// 🔗 Link: https://leetcode.com/problems/truncate-sentence/description/?envType=problem-list-v2&envId=n8ahh1k5
// 🗂 Topic: string
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(N)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string truncateSentence(string s, int k) {
        istringstream iss(s);
        string word;
        string result;
        int count = 0;

        while (count < k && iss >> word) {
            if (!result.empty()) result += ' ';
            result += word;
            ++count;
        }

        return result;    
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
