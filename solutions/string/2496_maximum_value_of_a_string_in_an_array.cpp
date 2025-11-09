// ✅ Problem: Maximum Value of a String in an Array
// 🔗 Link: https://leetcode.com/problems/maximum-value-of-a-string-in-an-array/description/?envType=problem-list-v2&envId=n8ahh1k5
// 🗂 Topic: string
// ⏱ Time Complexity: O(N*M)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int maxVal = 0;

        for (string s : strs) {
            bool isNumeric = all_of(s.begin(), s.end(), ::isdigit);

            int val;
            if (isNumeric) {
                val = stoi(s); // convert numeric string to integer
            } else {
                val = s.size(); // length of the string
            }

            maxVal = max(maxVal, val);
        }

        return maxVal;       
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
