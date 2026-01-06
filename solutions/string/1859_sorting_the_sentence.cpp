// ✅ Problem: Sorting the Sentence
// 🔗 Link: https://leetcode.com/problems/sorting-the-sentence/description/
// 🗂 Topic: string
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(N)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;

class Solution {
public:
    string sortSentence(string s) {
        stringstream ss(s);
        vector<string> result(10);  // max 9 words
        string word;
        int count = 0;

        while (ss >> word) {
            int index = word.back() - '1'; // convert char to index
            result[index] = word.substr(0, word.size() - 1);
            count++;
        }

        string answer = "";
        for (int i = 0; i < count; i++) {
            answer += result[i];
            if (i != count - 1)
                answer += " ";
        }

        return answer;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
