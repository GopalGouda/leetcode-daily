// ✅ Problem: Digit Frequency Score
// 🔗 Link: https://leetcode.com/problems/digit-frequency-score/description/
// 🗂 Topic: maths
// ⏱ Time Complexity: O(log n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int digitFrequencyScore(int n) {
        int score = 0;
        
        while (n > 0) {
            score += n % 10;
            n /= 10;
        }
        
        return score;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
