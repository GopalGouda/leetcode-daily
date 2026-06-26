// ✅ Problem: Number of Different Integers in a String
// 🔗 Link: https://leetcode.com/problems/number-of-different-integers-in-a-string/description/
// 🗂 Topic: hash_table
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(k)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int numDifferentIntegers(string word) {
        unordered_set<string> st;
        int n = word.size();

        int i = 0;
        while (i < n) {
            if (!isdigit(word[i])) {
                i++;
                continue;
            }

            string num = "";
            while (i < n && isdigit(word[i])) {
                num += word[i];
                i++;
            }

            // Remove leading zeros
            int j = 0;
            while (j < num.size() && num[j] == '0')
                j++;

            if (j == num.size())
                st.insert("0");
            else
                st.insert(num.substr(j));
        }

        return st.size();        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
