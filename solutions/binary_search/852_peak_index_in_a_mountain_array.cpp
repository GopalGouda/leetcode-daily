// ✅ Problem: Peak Index in a Mountain Array
// 🔗 Link: https://leetcode.com/problems/peak-index-in-a-mountain-array/description/
// 🗂 Topic: binary_search
// ⏱ Time Complexity: O(log n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: Binary Search on Monotonic Functions(first increasing, then decreasing)

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int low=1, high=n-2; // We avoid the edges since peak can't be at index 0 or n-1
        int mid;
        while(low<=high){
            mid= low+(high-low)/2;
            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]) return mid; // If mid is greater than both neighbors, it's the peak
            else if(arr[mid]>arr[mid+1]) high= mid-1;
            else low= mid+1;
        }
        return -1;
    }
};

int main() {
    Solution sol;
    vector <int> arr;
    arr.push_back(0);
    arr.push_back(2);
    arr.push_back(1);
    arr.push_back(0);
    int result=sol.peakIndexInMountainArray(arr);
    cout<<"Peak index in is: "<<result;

    return 0;
}
