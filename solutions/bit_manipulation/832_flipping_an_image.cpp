// ✅ Problem: Flipping an Image
// 🔗 Link: https://leetcode.com/problems/flipping-an-image/description/?envType=problem-list-v2&envId=bit-manipulation
// 🗂 Topic: bit_manipulation
// ⏱ Time Complexity: O(N*N)
// 💾 Space Complexity: O(1)
// 🧠 Approach: Bit Manipulation

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n = image.size();
        for (auto &row : image) {
            for (int i = 0; i < (n + 1) / 2; i++) {
                // Swap and invert
                int temp = row[i] ^ 1;       // invert current
                row[i] = row[n - 1 - i] ^ 1; // invert the other
                row[n - 1 - i] = temp;       // assign inverted temp
            }
        }
        return image;
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
