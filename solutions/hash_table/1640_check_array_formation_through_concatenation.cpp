// ✅ Problem: Check Array Formation Through Concatenation
// 🔗 Link: https://leetcode.com/problems/check-array-formation-through-concatenation/description/
// 🗂 Topic: hash_table
// ⏱ Time Complexity: O()
// 💾 Space Complexity: O()
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
        unordered_map<int, vector<int>> mp;

        // Map first element -> piece
        for (auto& piece : pieces) {
            mp[piece[0]] = piece;
        }

        int i = 0;

        while (i < arr.size()) {
            // No piece starts with arr[i]
            if (mp.find(arr[i]) == mp.end()) {
                return false;
            }

            vector<int>& piece = mp[arr[i]];

            // Check whether the piece matches arr
            for (int j = 0; j < piece.size(); j++) {
                if (i + j >= arr.size() || arr[i + j] != piece[j]) {
                    return false;
                }
            }

            i += piece.size();
        }

        return true;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
