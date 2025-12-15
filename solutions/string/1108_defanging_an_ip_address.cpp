// ✅ Problem: Defanging an IP Address
// 🔗 Link: https://leetcode.com/problems/defanging-an-ip-address/description/
// 🗂 Topic: string
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(N)
// 🧠 Approach: Iterate through each character in the input string and replace dots with "[.]"

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    string defangIPaddr(string address) {
        string result;
        for (char c : address) {
            if (c == '.') {
                result += "[.]";
            } else {
                result += c;
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
