// ✅ Problem: Number of Senior Citizens
// 🔗 Link: https://leetcode.com/problems/number-of-senior-citizens/description/
// 🗂 Topic: string
// ⏱ Time Complexity: O()
// 💾 Space Complexity: O()
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count = 0;
        
        for (const string& s : details) {
            int age = (s[11] - '0') * 10 + (s[12] - '0');
            if (age > 60) {
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
