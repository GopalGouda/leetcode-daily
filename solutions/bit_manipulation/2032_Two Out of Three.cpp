// ✅ Problem: Complement of Base 10 Integer
// 🔗 Link: https://leetcode.com/problems/complement-of-base-10-integer/description/?envType=problem-list-v2&envId=bit-manipulation
// 🗂 Topic: bit_manipulation
// ⏱ Time Complexity: O(log N)
// 💾 Space Complexity: O(1)
// 🧠 Approach: Bit manipulation

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        unordered_map<int, int> counts;
        
        unordered_set<int> s1(nums1.begin(), nums1.end());
        for (int num : s1) {
            counts[num]++;
        }
        
        unordered_set<int> s2(nums2.begin(), nums2.end());
        for (int num : s2) {
            counts[num]++;
        }
        
        unordered_set<int> s3(nums3.begin(), nums3.end());
        for (int num : s3) {
            counts[num]++;
        }
        
        vector<int> result;
        for (auto const& [num, count] : counts) {
            if (count >= 2) {
                result.push_back(num);
            }
        }
        
        return result;
        
    }
};
int main() {
    Solution sol;
    // Test cases
    return 0;
}
