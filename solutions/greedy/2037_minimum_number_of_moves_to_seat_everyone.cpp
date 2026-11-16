// ✅ Problem: Minimum Number of Moves to Seat Everyone
// 🔗 Link: https://leetcode.com/problems/minimum-number-of-moves-to-seat-everyone/description/
// 🗂 Topic: greedy
// ⏱ Time Complexity: O(n log n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(seats.begin(), seats.end());
        sort(students.begin(), students.end());

        int moves = 0;

        for (int i = 0; i < seats.size(); i++) {
            moves += abs(seats[i] - students[i]);
        }

        return moves;        
    }
};
int main() {
    Solution sol;
    // Test cases
    return 0;
}
