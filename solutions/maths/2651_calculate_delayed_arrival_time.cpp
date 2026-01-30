// ✅ Problem: Calculate Delayed Arrival Time
// 🔗 Link: https://leetcode.com/problems/calculate-delayed-arrival-time/description/
// 🗂 Topic: maths
// ⏱ Time Complexity: O(1)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
        int trainArrivalTime=arrivalTime+delayedTime;
        if(trainArrivalTime>=24){
            return trainArrivalTime-24;
        }else{
            return trainArrivalTime;
        }
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
