// ✅ Problem: Element Appearing More Than 25% In Sorted Array
// 🔗 Link: https://leetcode.com/problems/element-appearing-more-than-25-in-sorted-array/description/?envType=problem-list-v2&envId=n8ahh1k5
// 🗂 Topic: arrays
// ⏱ Time Complexity: O(Log)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n = arr.size();
        vector<int> candidates;
        candidates.push_back(arr[n/4]);
        candidates.push_back(arr[n/2]);
        candidates.push_back(arr[(3*n)/4]);

        int threshold = n / 4;
        for (int cand : candidates) {
            auto lo = lower_bound(arr.begin(), arr.end(), cand);
            auto hi = upper_bound(arr.begin(), arr.end(), cand);
            if (hi - lo > threshold) return cand;
        }
        return -1;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
