// ✅ Problem: Add to Array-Form of Integer
// 🔗 Link: https://leetcode.com/problems/add-to-array-form-of-integer/description/
// 🗂 Topic: maths
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(n)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int i = num.size() - 1;
        vector<int> result;

        while (i >= 0 || k > 0) {
            if (i >= 0) {
                k += num[i];
                i--;
            }

            result.push_back(k % 10);
            k /= 10;
        }

        reverse(result.begin(), result.end());
        return result;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
