// ✅ Problem: Replace Elements with Greatest Element on Right Side
// 🔗 Link: https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/description/?envType=problem-list-v2&envId=n8ahh1k5
// 🗂 Topic: arrays
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(N)
// 🧠 Approach: Start form end;

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size();
        vector<int> ans(n);
        int max_so_far=-1;
        for(int i=n-1; i>=0; i--){ //start from end
            ans[i]=max_so_far;
            if(arr[i]>max_so_far) max_so_far=arr[i];
        }
        return ans;
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
