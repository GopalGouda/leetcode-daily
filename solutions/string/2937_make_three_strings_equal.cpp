// ✅ Problem: Make Three Strings Equal
// 🔗 Link: https://leetcode.com/problems/make-three-strings-equal/description/
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
    int findMinimumOperations(string s1, string s2, string s3) {
        int lcp = 0;
        int mn = min({s1.size(), s2.size(), s3.size()});

        while (lcp < mn &&
               s1[lcp] == s2[lcp] &&
               s2[lcp] == s3[lcp]) {
            lcp++;
        }

        if (lcp == 0) return -1;

        return (s1.size() - lcp) +
               (s2.size() - lcp) +
               (s3.size() - lcp);        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
