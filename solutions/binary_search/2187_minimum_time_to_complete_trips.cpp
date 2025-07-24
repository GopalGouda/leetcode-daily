// ✅ Problem: Minimum Time to Complete Trips
// 🔗 Link: https://leetcode.com/problems/minimum-time-to-complete-trips/description/
// 🗂 Topic: binary_search
// ⏱ Time Complexity: O(Nlog(M))
// 💾 Space Complexity: O(1)
// 🧠 Approach: Binary Search

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool check(long long mid, vector<int>& time, int totalTrips){
        long long count=0;
        for(int i=0; i<time.size(); i++){
            count+= mid/ (long long)time[i]; //count total number of trips
        }
        return count>=totalTrips;
    }
    long long minimumTime(vector<int>& time, int totalTrips) {
        int n=time.size();
        long long ans;
        int mx=0;
        for(int i=0; i<n; i++){
            mx=max(mx, time[i]);
        }
        long long lo=1;
        long long hi=(long long) mx * (long long)totalTrips;
        long long mid;
        while(lo<=hi){
            mid=lo+(hi-lo)/2;
            if(check(mid, time, totalTrips)){
                ans=mid;
                hi= mid-1;
            }else lo=mid+1;
        }
        return ans;
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
