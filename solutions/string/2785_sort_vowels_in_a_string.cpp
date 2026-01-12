// ✅ Problem: Sort Vowels in a String
// 🔗 Link: https://leetcode.com/problems/sort-vowels-in-a-string/description/
// 🗂 Topic: string
// ⏱ Time Complexity: O(Nlogn)
// 💾 Space Complexity: O(N)
// 🧠 Approach: Extract all vowels, sort them, then place them back in order.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    string sortVowels(string s) {
        string vowels = "aeiouAEIOU";
        vector<char> v;
        
        // Step 1: Collect vowels
        for (char c : s) {
            if (vowels.find(c) != string::npos) {
                v.push_back(c);
            }
        }
        
        // Step 2: Sort vowels by ASCII
        sort(v.begin(), v.end());
        
        // Step 3: Replace vowels in original string
        int idx = 0;
        for (char &c : s) {
            if (vowels.find(c) != string::npos) {
                c = v[idx++];
            }
        }
        
        return s;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
