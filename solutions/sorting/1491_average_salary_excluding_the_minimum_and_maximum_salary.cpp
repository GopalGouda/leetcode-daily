// ✅ Problem: Average Salary Excluding the Minimum and Maximum Salary
// 🔗 Link: https://leetcode.com/problems/average-salary-excluding-the-minimum-and-maximum-salary/description/?envType=problem-list-v2&envId=n8ahh1k5
// 🗂 Topic: sorting
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    double average(vector<int>& salary) {
        int minSalary = *min_element(salary.begin(), salary.end());
        int maxSalary = *max_element(salary.begin(), salary.end());
        int total = 0;

        for (int s : salary) {
            total += s;
        }

        return (double)(total - minSalary - maxSalary) / (salary.size() - 2);        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
