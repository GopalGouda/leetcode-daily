// ✅ Problem: Reverse Words in a String
// 🔗 Link: https://leetcode.com/problems/reverse-words-in-a-string/description/
// 🗂 Topic: two_pointer
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(n)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word, ans;

        while (ss >> word) {
            if (ans.empty())
                ans = word;
            else
                ans = word + " " + ans;
        }

        return ans;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
