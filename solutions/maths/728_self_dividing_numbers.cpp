// ✅ Problem: Self Dividing Numbers
// 🔗 Link: https://leetcode.com/problems/self-dividing-numbers/description/
// 🗂 Topic: maths
// ⏱ Time Complexity: O(N∗K)
// 💾 Space Complexity: O(N)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
         vector<int> result;

        for (int i = left; i <= right; i++) {
            int num = i;
            bool isSelfDividing = true;

            while (num > 0) {
                int digit = num % 10;

                if (digit == 0 || i % digit != 0) {
                    isSelfDividing = false;
                    break;
                }

                num /= 10;
            }

            if (isSelfDividing) {
                result.push_back(i);
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
