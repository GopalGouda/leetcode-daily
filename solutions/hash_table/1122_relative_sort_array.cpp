// ✅ Problem: Relative Sort Array
// 🔗 Link: https://leetcode.com/problems/relative-sort-array/description/
// 🗂 Topic: hash_table
// ⏱ Time Complexity: O(n + m)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int freq[1001] = {0};

        // Step 1: Count frequency of elements
        for (int num : arr1) {
            freq[num]++;
        }

        int index = 0;

        // Step 2: Arrange according to arr2
        for (int num : arr2) {
            while (freq[num] > 0) {
                arr1[index++] = num;
                freq[num]--;
            }
        }

        // Step 3: Arrange remaining elements in ascending order
        for (int i = 0; i <= 1000; i++) {
            while (freq[i] > 0) {
                arr1[index++] = i;
                freq[i]--;
            }
        }

        return arr1;
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
