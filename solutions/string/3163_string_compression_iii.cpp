// ✅ Problem: String Compression III
// 🔗 Link: https://leetcode.com/problems/string-compression-iii/description/
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
    string compressedString(string word) {
        string comp;
        int n = word.size();
        int i = 0;
        while (i < n) {
            char c = word[i];
            int j = i;
            // count how many same char from i
            while (j < n && word[j] == c) ++j;
            int runLen = j - i;
            // split run into chunks of at most 9
            while (runLen > 0) {
                int take = min(runLen, 9);
                comp += to_string(take);
                comp.push_back(c);
                runLen -= take;
            }
            i = j; // move to next run
        }
        return comp;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
