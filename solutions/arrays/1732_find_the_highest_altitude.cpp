// ✅ Problem: Find the Highest Altitude
// 🔗 Link: https://leetcode.com/problems/find-the-highest-altitude/description/
// 🗂 Topic: arrays
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int current=0;
        int maxAltitude=0;
        for(int i: gain){
            current+=i;
            maxAltitude=max(maxAltitude, current);
        }
        return maxAltitude;
        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
