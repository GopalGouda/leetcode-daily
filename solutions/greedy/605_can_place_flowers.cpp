// ✅ Problem: Can Place Flowers
// 🔗 Link: https://leetcode.com/problems/can-place-flowers/description/
// 🗂 Topic: greedy
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int size = flowerbed.size();

        for (int i = 0; i < size; i++) {

            if (flowerbed[i] == 0) {

                bool emptyLeft = (i == 0 || flowerbed[i - 1] == 0);

                bool emptyRight = (i == size - 1 || flowerbed[i + 1] == 0);

                if (emptyLeft && emptyRight) {
                    flowerbed[i] = 1;
                    n--;
                }
            }

            if (n <= 0) {
                return true;
            }
        }

        return false;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
