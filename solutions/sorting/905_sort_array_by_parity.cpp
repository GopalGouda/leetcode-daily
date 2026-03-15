// ✅ Problem: Sort Array By Parity
// 🔗 Link: https://leetcode.com/problems/sort-array-by-parity/description/
// 🗂 Topic: sorting
// ⏱ Time Complexity: O(n)
// 💾 Space Complexity: O()
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> result;

        for(int x : nums){
            if(x % 2 == 0)
                result.push_back(x);
        }

        for(int x : nums){
            if(x % 2 != 0)
                result.push_back(x);
        }

        return result;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
