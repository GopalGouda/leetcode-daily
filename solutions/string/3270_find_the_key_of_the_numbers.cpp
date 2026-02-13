// ✅ Problem: Find the Key of the Numbers
// 🔗 Link: https://leetcode.com/problems/find-the-key-of-the-numbers/description/
// 🗂 Topic: string
// ⏱ Time Complexity: O(1)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int generateKey(int num1, int num2, int num3) {
// Convert numbers to 4-digit strings with leading zeros
        string s1 = to_string(num1);
        string s2 = to_string(num2);
        string s3 = to_string(num3);
        
        while (s1.length() < 4) s1 = "0" + s1;
        while (s2.length() < 4) s2 = "0" + s2;
        while (s3.length() < 4) s3 = "0" + s3;
        
        string key = "";
        
        // Compare each digit position
        for (int i = 0; i < 4; i++) {
            char smallest = min({s1[i], s2[i], s3[i]});
            key += smallest;
        }
        
        // Convert to integer to remove leading zeros
        return stoi(key);        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
