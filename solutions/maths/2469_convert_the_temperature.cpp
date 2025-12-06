// ✅ Problem: Convert the Temperature
// 🔗 Link: https://leetcode.com/problems/convert-the-temperature/description/
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
    vector<double> convertTemperature(double celsius) {
        double kelvin = celsius + 273.15;
        double fahrenheit = celsius * 1.80 + 32;
        return {kelvin, fahrenheit};
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
