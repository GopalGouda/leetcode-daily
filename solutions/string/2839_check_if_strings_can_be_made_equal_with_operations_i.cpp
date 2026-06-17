// ✅ Problem: Check if Strings Can be Made Equal With Operations I
// 🔗 Link: https://leetcode.com/problems/check-if-strings-can-be-made-equal-with-operations-i/description/
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
    bool canBeEqual(string s1, string s2) {
        vector<char> e1 = {s1[0], s1[2]};
        vector<char> e2 = {s2[0], s2[2]};
        vector<char> o1 = {s1[1], s1[3]};
        vector<char> o2 = {s2[1], s2[3]};

        sort(e1.begin(), e1.end());
        sort(e2.begin(), e2.end());
        sort(o1.begin(), o1.end());
        sort(o2.begin(), o2.end());

        return e1 == e2 && o1 == o2;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
