// ✅ Problem: Number of Employees Who Met the Target
// 🔗 Link: https://leetcode.com/problems/number-of-employees-who-met-the-target/description/?envType=problem-list-v2&envId=n8ahh1k5
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
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int EmployeesWhoMetTarget=0;
        for(int i : hours){
            if(i>=target) EmployeesWhoMetTarget++;
        }
        return EmployeesWhoMetTarget;
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
