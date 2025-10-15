// ✅ Problem: Count Items Matching a Rule
// 🔗 Link: https://leetcode.com/problems/count-items-matching-a-rule/description/?envType=problem-list-v2&envId=n8ahh1k5
// 🗂 Topic: arrays
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int index;
        if (ruleKey == "type") index = 0;
        else if (ruleKey == "color") index = 1;
        else index = 2;
        
        int count = 0;
        for (auto& item : items) {
            if (item[index] == ruleValue)
                count++;
        }
        return count;
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
