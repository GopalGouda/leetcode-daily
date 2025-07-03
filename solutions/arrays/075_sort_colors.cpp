// ✅ Problem: sort colors
// 🔗 Link: https://leetcode.com/problems/sort-colors/description/
// 🗂 Topic: arrays
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(1)
// 🧠 Approach: Dutch National Flag Algorithm

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0, mid = 0, high = nums.size() - 1;

        while (mid <= high) {
            if (nums[mid] == 0) {
                swap(nums[mid], nums[low]);
                low++;
                mid++;
            } else if (nums[mid] == 2) {
                swap(nums[mid], nums[high]);
                high--;
            } else {
                mid++;
            }
        }
    }
};

int main() {
    Solution sol;
    vector<int> test = {2, 0, 2, 1, 1, 0};
    sol.sortColors(test);

    for (int num : test) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}