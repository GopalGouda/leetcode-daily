// ✅ Problem: Reverse Letters Then Special Characters in a String
// 🔗 Link: https://leetcode.com/problems/reverse-letters-then-special-characters-in-a-string/description/
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
    string reverseByType(string s) {
vector<char> letters, specials;

    // Step 1: Collect characters
    for (char c : s) {
        if (islower(c)) {
            letters.push_back(c);
        } else {
            specials.push_back(c);
        }
    }

    // Step 2: Reverse both groups
    reverse(letters.begin(), letters.end());
    reverse(specials.begin(), specials.end());

    // Step 3: Rebuild string
    int i = 0, j = 0;
    string result = "";

    for (char c : s) {
        if (islower(c)) {
            result += letters[i++];
        } else {
            result += specials[j++];
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
