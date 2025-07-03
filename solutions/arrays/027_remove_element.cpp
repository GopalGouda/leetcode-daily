// ✅ Problem: remove element
// 🔗 Link: https://leetcode.com/problems/remove-element/description/
// 🗂 Topic: arrays
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(1)
// 🧠 Approach: Two Pointers – Swap matching element to the end and reduce size

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0, j = nums.size() - 1;
        while (i <= j) {
            if (nums[i] == val) {
                swap(nums[i], nums[j]);
                j--;
            } else {
                i++;
            }
        }
        return j + 1;  // New length after removal
    }
};

int main() {
    Solution sol;

    // Example test case
    vector<int> nums = {3, 2, 2, 3};
    int val = 3;

    int newLength = sol.removeElement(nums, val);
    cout << "New length: " << newLength << endl;

    cout << "Modified array: ";
    for (int i = 0; i < newLength; ++i) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
