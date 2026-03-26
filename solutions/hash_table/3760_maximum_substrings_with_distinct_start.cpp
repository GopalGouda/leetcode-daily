// ✅ Problem: Maximum Substrings With Distinct Start
// 🔗 Link: https://leetcode.com/problems/maximum-substrings-with-distinct-start/description/
// 🗂 Topic: hash_table
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int maxDistinct(string s) {
    unordered_set<char> uniqueChars;
    
    for (char c : s) {
        uniqueChars.insert(c);
    }
    
    return uniqueChars.size();        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
