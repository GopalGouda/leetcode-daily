// ✅ Problem: Find The Original Array of Prefix Xor
// 🔗 Link: https://leetcode.com/problems/find-the-original-array-of-prefix-xor/description/
// 🗂 Topic: bit_manipulation
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(1)
// 🧠 Approach: The prefix XOR array is built from the original array such that pref[i] = arr[0] ^ arr[1] ^ ... ^ arr[i]. To reconstruct the original array, we use the property that arr[i] = pref[i] ^ pref[i-1].

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        int n = pref.size();
        vector<int> arr(n);

        arr[0] = pref[0];
        for (int i = 1; i < n; i++) {
            arr[i] = pref[i] ^ pref[i - 1];
        }

        return arr;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
