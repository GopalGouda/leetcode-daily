// ✅ Problem: Reformat The String
// 🔗 Link: https://leetcode.com/problems/reformat-the-string/description/
// 🗂 Topic: string
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(n)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    string reformat(string s) {
vector<char> letters, digits;
        
        // Separate letters and digits
        for (char ch : s) {
            if (isalpha(ch))
                letters.push_back(ch);
            else
                digits.push_back(ch);
        }
        
        // Check if reformatting is possible
        if (abs((int)letters.size() - (int)digits.size()) > 1)
            return "";
        
        // Decide which group starts first
        vector<char> &first = (letters.size() > digits.size()) ? letters : digits;
        vector<char> &second = (letters.size() > digits.size()) ? digits : letters;
        
        string result = "";
        
        // Interleave characters
        for (int i = 0; i < second.size(); i++) {
            result += first[i];
            result += second[i];
        }
        
        // Add the remaining character (if any)
        if (first.size() > second.size()) {
            result += first.back();
        }
        
        return result;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
