// ✅ Problem: Keyboard Row question solved
// 🔗 Link: https://leetcode.com/problems/keyboard-row/submissions/1929787900/
// 🗂 Topic: string
// ⏱ Time Complexity: O(N*M) where N is number of words and M is average length of each word
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<string> findWords(vector<string>& words) {
vector<string> result;
        
        unordered_map<char, int> mp;
        
        string row1 = "qwertyuiop";
        string row2 = "asdfghjkl";
        string row3 = "zxcvbnm";
        
        for(char c : row1) mp[c] = 1;
        for(char c : row2) mp[c] = 2;
        for(char c : row3) mp[c] = 3;
        
        for(string word : words) {
            int row = mp[tolower(word[0])];
            bool valid = true;
            
            for(char c : word) {
                if(mp[tolower(c)] != row) {
                    valid = false;
                    break;
                }
            }
            
            if(valid)
                result.push_back(word);
        }
        
        return result;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
