// ✅ Problem: Find N Unique Integers Sum up to Zero
// 🔗 Link: https://leetcode.com/problems/find-n-unique-integers-sum-up-to-zero/description/?envType=problem-list-v2&envId=n8ahh1k5
// 🗂 Topic: arrays
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(N)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> ans;
        for(int i=1; i<=n/2; i++){
            ans.push_back(i); //add +ve nos.
            ans.push_back(-i); // add -ve nos.
            //this will cancel each other;
        }
        if(n%2 != 0)ans.push_back(0); //zero to match the n nos.
        return ans;
        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
