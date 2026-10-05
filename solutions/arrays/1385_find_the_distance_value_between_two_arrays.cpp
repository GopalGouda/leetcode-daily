// ✅ Problem: Find the Distance Value Between Two Arrays
// 🔗 Link: https://leetcode.com/problems/find-the-distance-value-between-two-arrays/description/
// 🗂 Topic: arrays
// ⏱ Time Complexity: OO(n × m)
// 💾 Space Complexity: O(n)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int ans = 0;

        for (int x : arr1) {
            bool valid = true;

            for (int y : arr2) {
                if (abs(x - y) <= d) {
                    valid = false;
                    break;
                }
            }

            if (valid)
                ans++;
        }

        return ans;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
