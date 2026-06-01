// ✅ Problem: Fizz Buzz
// 🔗 Link: https://leetcode.com/problems/fizz-buzz/
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
    vector<string> fizzBuzz(int n) {
        vector<string> ans;

        for (int i = 1; i <= n; i++) {
            string curr = "";

            if (i % 3 == 0) curr += "Fizz";
            if (i % 5 == 0) curr += "Buzz";

            if (curr.empty()) {
                curr = to_string(i);
            }

            ans.push_back(curr);
        }

        return ans;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
