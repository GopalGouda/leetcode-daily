// ✅ Problem: Jewels and Stones
// 🔗 Link: https://leetcode.com/problems/jewels-and-stones/description/
// 🗂 Topic: hash_table
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(m)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0;

        for (char s : stones) {
            if (jewels.find(s) != string::npos) {
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
