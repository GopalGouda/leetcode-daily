// ✅ Problem: First Letter to Appear Twice
// 🔗 Link: https://leetcode.com/problems/first-letter-to-appear-twice/description/?envType=problem-list-v2&envId=bit-manipulation
// 🗂 Topic: bit_manipulation
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(1)
// 🧠 Approach:Bit Manipulation

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
char repeatedCharacter(string s) {
int mask = 0; // will store which letters we have seen (using bits)

    for (char ch : s) {
        int bit = ch - 'a'; // position of this letter (0 for 'a', 1 for 'b', ...)

        // if this bit is already ON, we saw this letter before
        if (mask & (1 << bit)) {
            return ch; // so this is the first letter that appears twice
        }

        // otherwise, turn this bit ON to mark the letter as seen
        mask |= (1 << bit);
    }
    return ' '; // not needed (the problem guarantees at least one repeat)
}
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
