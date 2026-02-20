// ✅ Problem: Keep Multiplying Found Values by Two
// 🔗 Link: https://leetcode.com/problems/keep-multiplying-found-values-by-two/description/
// 🗂 Topic: arrays
// ⏱ Time Complexity: O(N*K)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        bool found = true;
        
        while (found) {
            found = false;
            for (int num : nums) {
                if (num == original) {
                    original *= 2;
                    found = true;
                    break;
                }
            }
        }
        
        return original;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
