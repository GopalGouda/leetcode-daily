// ✅ Problem: Make The String Great
// 🔗 Link: Make The String Great
// 🗂 Topic: stack
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(n)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    string makeGood(string s) {
        string st;

        for (char ch : s) {
            if (!st.empty() && abs(st.back() - ch) == 32) {
                st.pop_back();
            } else {
                st.push_back(ch);
            }
        }

        return st;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
