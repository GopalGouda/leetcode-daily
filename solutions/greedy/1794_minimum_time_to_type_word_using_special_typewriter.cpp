// ✅ Problem: Minimum Time to Type Word Using Special Typewriter
// 🔗 Link: https://leetcode.com/problems/minimum-time-to-type-word-using-special-typewriter/description/
// 🗂 Topic: greedy
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minTimeToType(string word) {
        int time = 0;
        char current = 'a';

        for(char c : word){
            int diff = abs(c - current);
            time += min(diff, 26 - diff); // rotation
            time += 1;                    // typing
            current = c;
        }

        return time;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
