// ✅ Problem: Restore Finishing Order
// 🔗 Link: https://leetcode.com/problems/restore-finishing-order/description/
// 🗂 Topic: hash_table
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(N)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        unordered_set<int> isFriend(friends.begin(), friends.end());
        vector<int> result;

        for (int id : order) {
            if (isFriend.count(id)) {
                result.push_back(id);
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
