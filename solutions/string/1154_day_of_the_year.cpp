// ✅ Problem: Day of the Year
// 🔗 Link: https://leetcode.com/problems/day-of-the-year/description/
// 🗂 Topic: string
// ⏱ Time Complexity: O(1)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int dayOfYear(string date) {
        int year = stoi(date.substr(0, 4));
        int month = stoi(date.substr(5, 2));
        int day = stoi(date.substr(8, 2));

        int daysInMonth[] = {
            31, 28, 31, 30, 31, 30,
            31, 31, 30, 31, 30, 31
        };

        // Check for leap year
        if (year % 400 == 0 || 
            (year % 4 == 0 && year % 100 != 0)) {
            daysInMonth[1] = 29;
        }

        int answer = day;

        for (int i = 0; i < month - 1; i++) {
            answer += daysInMonth[i];
        }

        return answer;
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
