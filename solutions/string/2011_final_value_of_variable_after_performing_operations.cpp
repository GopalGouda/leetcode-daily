// ✅ Problem: Final Value of Variable After Performing Operations
// 🔗 Link: https://leetcode.com/problems/final-value-of-variable-after-performing-operations/description/
// 🗂 Topic: string
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;

        for (string& op : operations) {
            if (op.find("++") != string::npos)
                ++x;
            else
                --x;
        }

        return x;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
