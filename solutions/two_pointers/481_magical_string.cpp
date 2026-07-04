// ✅ Problem: Magical String
// 🔗 Link: https://leetcode.com/problems/magical-string/description/
// 🗂 Topic: two_pointer
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(n)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int magicalString(int n) {
        if (n <= 0) return 0;
        if (n <= 3) return 1;

        vector<int> s(n + 2);
        s[0] = 1;
        s[1] = 2;
        s[2] = 2;

        int head = 2;
        int tail = 3;
        int num = 1;
        int count = 1; // first '1'

        while (tail < n) {
            int repeat = s[head];

            for (int i = 0; i < repeat && tail < n; i++) {
                s[tail++] = num;
                if (num == 1)
                    count++;
            }

            num = (num == 1) ? 2 : 1;
            head++;
        }

        return count;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
