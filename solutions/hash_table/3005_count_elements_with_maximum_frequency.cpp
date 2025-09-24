// ✅ Problem: Count Elements With Maximum Frequency
// 🔗 Link: https://leetcode.com/problems/count-elements-with-maximum-frequency/description/?envType=problem-list-v2&envId=n8ahh1k5
// 🗂 Topic: hash_table
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(N)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> freq;
        int maxFreq = 0;

        // Count frequencies
        for (int num : nums) {
            freq[num]++;
            maxFreq = max(maxFreq, freq[num]);
        }

        // Sum frequencies equal to maxFreq
        int total = 0;
        for (auto& [key, val] : freq) {
            if (val == maxFreq) total += val;
        }

        return total;    
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
