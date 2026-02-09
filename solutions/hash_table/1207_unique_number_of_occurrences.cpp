// ✅ Problem: Unique Number of Occurrences
// 🔗 Link: https://leetcode.com/problems/unique-number-of-occurrences/description/
// 🗂 Topic: hash_table
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(N)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> freq;
        unordered_set<int> seen;

        // Count frequency of each number
        for (int num : arr) {
            freq[num]++;
        }

        // Check if frequencies are unique
        for (auto &p : freq) {
            if (seen.count(p.second)) {
                return false;
            }
            seen.insert(p.second);
        }

        return true;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
