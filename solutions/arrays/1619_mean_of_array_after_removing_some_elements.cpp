// ✅ Problem: Mean of Array After Removing Some Elements
// 🔗 Link: https://leetcode.com/problems/mean-of-array-after-removing-some-elements/description/?envType=problem-list-v2&envId=n8ahh1k5
// 🗂 Topic: arrays
// ⏱ Time Complexity: O(N log N)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    double trimMean(vector<int>& arr) {
        sort(arr.begin(), arr.end()); // sort the array
        int n=arr.size(); //size of the array
        int k= n*0.05; // 5% of array

        double sum=0; //sum of array
        for(int i=k; i<n-k; ++i){
            sum+=arr[i];
        }

        double mean=sum/(n-2*k); // find the mean;
        return mean;
        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
