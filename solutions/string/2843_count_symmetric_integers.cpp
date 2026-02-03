// ✅ Problem: Count Symmetric Integers
// 🔗 Link: https://leetcode.com/problems/count-symmetric-integers/description/
// 🗂 Topic: string
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int count = 0;

        for (int x = low; x <= high; x++) {
            string s = to_string(x);
            int n = s.size();

            // Odd length numbers can't be symmetric
            if (n % 2 != 0) continue;

            int half = n / 2;
            int leftSum = 0, rightSum = 0;

            for (int i = 0; i < half; i++) {
                leftSum += s[i] - '0';
                rightSum += s[i + half] - '0';
            }

            if (leftSum == rightSum)
                count++;
        }

        return count;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
