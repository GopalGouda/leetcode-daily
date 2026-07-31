// ✅ Problem: Distribute Candies
// 🔗 Link: https://leetcode.com/problems/distribute-candies/description/
// 🗂 Topic: hash_table
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(n)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_set<int> types(candyType.begin(), candyType.end());
        return min((int)types.size(), (int)candyType.size() / 2);        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
