// ✅ Problem: String Compression
// 🔗 Link: https://leetcode.com/problems/string-compression/description/
// 🗂 Topic: two_pointers
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int i = 0;
        int write = 0;

        while (i < n) {
            char curr = chars[i];
            int count = 0;

            // Count consecutive occurrences
            while (i < n && chars[i] == curr) {
                i++;
                count++;
            }

            // Write the character
            chars[write++] = curr;

            // Write the count if greater than 1
            if (count > 1) {
                string cnt = to_string(count);
                for (char c : cnt) {
                    chars[write++] = c;
                }
            }
        }

        return write;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
