// ✅ Problem: Number of Students Doing Homework at a Given Time
// 🔗 Link: https://leetcode.com/problems/number-of-students-doing-homework-at-a-given-time/description/?envType=problem-list-v2&envId=n8ahh1k5
// 🗂 Topic: arrays
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        int ans=0;
        for(int i=0; i<startTime.size(); i++){
            if(startTime[i]<=queryTime && endTime[i]>=queryTime) ans++;
        }
        return ans;
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
