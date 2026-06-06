// ✅ Problem: Repeated String Match
// 🔗 Link: https://leetcode.com/problems/repeated-string-match/description/
// 🗂 Topic: string
// ⏱ Time Complexity: O(n+m)
// 💾 Space Complexity: O(n+m)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        string repeated = a;
        int count = 1;

        while (repeated.size() < b.size()) {
            repeated += a;
            count++;
        }

        if (repeated.find(b) != string::npos)
            return count;

        repeated += a;
        if (repeated.find(b) != string::npos)
            return count + 1;

        return -1;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
