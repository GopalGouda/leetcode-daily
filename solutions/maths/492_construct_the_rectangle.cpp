// ✅ Problem: Construct the Rectangle
// 🔗 Link: https://leetcode.com/problems/construct-the-rectangle/description/
// 🗂 Topic: maths
// ⏱ Time Complexity: O()
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

class Solution {
public:
    vector<int> constructRectangle(int area) {
        int w = sqrt(area);
        while (area % w != 0) {
            w--;
        }
        return {area / w, w};        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
