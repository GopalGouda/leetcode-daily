// ✅ Problem: valid mountain array
// 🔗 Link: https://leetcode.com/problems/valid-mountain-array/
// 🗂 Topic: arrays
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(1)
// 🧠 Approach: Linear Scan 

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
    int n = arr.size();
    if (n < 3) return false;

    int i = 0;

    // climb up
    while (i + 1 < n && arr[i] < arr[i + 1]) i++;

    // peak can't be first or last
    if (i == 0 || i == n - 1) return false;

    // climb down
    while (i + 1 < n && arr[i] > arr[i + 1]) i++;

    return i == n - 1;
}

};

int main() {
    Solution sol;
    vector<int> test = {0, 3, 2, 1};
    cout << (sol.validMountainArray(test) ? "Valid Mountain" : "Not a Mountain") << endl;
    return 0;
}

