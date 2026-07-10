// ✅ Problem: Longest Uncommon Subsequence I
// 🔗 Link: 
// 🗂 Topic: string
// ⏱ Time Complexity: O()
// 💾 Space Complexity: O()
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int findLUSlength(string a, string b) {
        if (a == b) return -1;
        return max(a.length(), b.length());        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
