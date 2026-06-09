// ✅ Problem: Kth Distinct String in an Array
// 🔗 Link: https://leetcode.com/problems/kth-distinct-string-in-an-array/description/
// 🗂 Topic: hash_table
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(n)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> freq;
        
        for (string &s : arr) {
            freq[s]++;
        }
        
        for (string &s : arr) {
            if (freq[s] == 1) {
                k--;
                if (k == 0) {
                    return s;
                }
            }
        }
        
        return "";        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
