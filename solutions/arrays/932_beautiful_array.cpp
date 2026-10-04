// ✅ Problem: Beautiful Array
// 🔗 Link: https://leetcode.com/problems/beautiful-array/description/
// 🗂 Topic: array
// ⏱ Time Complexity: O(n log n)
// 💾 Space Complexity: O(n)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> beautifulArray(int n) {
        if (n == 1)
            return {1};

        vector<int> odd = beautifulArray((n + 1) / 2);
        vector<int> even = beautifulArray(n / 2);

        vector<int> ans;

        // Convert to odd numbers
        for (int x : odd) {
            ans.push_back(2 * x - 1);
        }

        // Convert to even numbers
        for (int x : even) {
            ans.push_back(2 * x);
        }

        return ans;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
