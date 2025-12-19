// ✅ Problem: Goal Parser Interpretation
// 🔗 Link: https://leetcode.com/problems/goal-parser-interpretation/description/
// 🗂 Topic: string
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O()
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    string interpret(string command) {
        string result;
        
        for (int i = 0; i < command.length(); i++) {
            if (command[i] == 'G') {
                result += 'G';
            } 
            else if (command[i] == '(') {
                if (command[i + 1] == ')') {
                    result += 'o';
                    i++; // skip ')'
                } else {
                    result += "al";
                    i += 3; // skip "al)"
                }
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
