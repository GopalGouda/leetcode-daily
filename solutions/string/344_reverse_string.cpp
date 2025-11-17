// ✅ Problem: Reverse String
// 🔗 Link: https://leetcode.com/problems/reverse-string/description/
// 🗂 Topic: string
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0, right = s.size() - 1;
        
        while (left < right) {
            swap(s[left], s[right]);
            left++;
            right--;
        }        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
