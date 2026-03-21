// ✅ Problem: Reverse Vowels of a String
// 🔗 Link: https://leetcode.com/problems/reverse-vowels-of-a-string/description/
// 🗂 Topic: two_pointer
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

class Solution {
public:
    string reverseVowels(string s) {
        unordered_set<char> vowels = {'a','e','i','o','u','A','E','I','O','U'};
        
        int left = 0, right = s.length() - 1;
        
        while (left < right) {
            if (vowels.find(s[left]) == vowels.end()) {
                left++;
            } 
            else if (vowels.find(s[right]) == vowels.end()) {
                right--;
            } 
            else {
                swap(s[left], s[right]);
                left++;
                right--;
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
