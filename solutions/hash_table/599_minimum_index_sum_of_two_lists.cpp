// ✅ Problem: Minimum Index Sum of Two Lists
// 🔗 Link: https://leetcode.com/problems/minimum-index-sum-of-two-lists/description/
// 🗂 Topic: hash_table
// ⏱ Time Complexity: O(n + m)
// 💾 Space Complexity: O(n)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string, int> mp;

        // Store list1 strings and their indices
        for (int i = 0; i < list1.size(); i++) {
            mp[list1[i]] = i;
        }

        vector<string> result;
        int minSum = INT_MAX;

        // Traverse list2
        for (int j = 0; j < list2.size(); j++) {

            if (mp.find(list2[j]) != mp.end()) {

                int sum = j + mp[list2[j]];

                if (sum < minSum) {
                    minSum = sum;
                    result.clear();
                    result.push_back(list2[j]);
                }
                else if (sum == minSum) {
                    result.push_back(list2[j]);
                }
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
