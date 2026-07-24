// ✅ Problem: Student Attendance Record I
// 🔗 Link: https://leetcode.com/problems/student-attendance-record-i/description/
// 🗂 Topic: string
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool checkRecord(string s) {
        int absent = 0;
        int late = 0;

        for (char ch : s) {
            if (ch == 'A') {
                absent++;
                late = 0;
            }
            else if (ch == 'L') {
                late++;
            }
            else { // 'P'
                late = 0;
            }

            if (absent >= 2 || late >= 3)
                return false;
        }

        return true;       
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}