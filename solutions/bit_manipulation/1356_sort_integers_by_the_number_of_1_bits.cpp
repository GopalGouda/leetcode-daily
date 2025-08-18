// ✅ Problem: Sort Integers by The Number of 1 Bits
// 🔗 Link: https://leetcode.com/problems/sort-integers-by-the-number-of-1-bits/description/?envType=problem-list-v2&envId=bit-manipulation
// 🗂 Topic: bit_manipulation
// ⏱ Time Complexity: O(N log n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: Bit Manipulation

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int countBits(int x) {
    int count = 0;
    while (x) {
        x &= (x - 1); // removes the lowest set bit
        count++;
    }
    return count;
}

class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(), [&](int a, int b) {
            int countA = countBits(a);
            int countB = countBits(b);
            if (countA == countB) return a < b;
            return countA < countB;
        });
        return arr;
    }
};


int main() {
    Solution sol;
    // Test cases
    return 0;
}
