// ✅ Problem: Decode XORed Array
// 🔗 Link: https://leetcode.com/problems/decode-xored-array/description/?envType=problem-list-v2&envId=bit-manipulation
// 🗂 Topic: bit_manipulation
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(N)
// 🧠 Approach: Bit Manipulation

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> arr;
        arr.push_back(first);
        for (int e : encoded) {
            arr.push_back(arr.back() ^ e);
        }
        return arr;
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}