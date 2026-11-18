// ✅ Problem: Lemonade Change
// 🔗 Link: https://leetcode.com/problems/lemonade-change/description/
// 🗂 Topic: Greedy
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0;
        int ten = 0;

        for (int bill : bills) {

            if (bill == 5) {
                five++;
            }
            else if (bill == 10) {
                if (five == 0) {
                    return false;
                }

                five--;
                ten++;
            }
            else if (bill == 20) {

                // Prefer giving $10 + $5
                if (ten > 0 && five > 0) {
                    ten--;
                    five--;
                }
                // Otherwise give three $5 bills
                else if (five >= 3) {
                    five -= 3;
                }
                else {
                    return false;
                }
            }
        }

        return true;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
