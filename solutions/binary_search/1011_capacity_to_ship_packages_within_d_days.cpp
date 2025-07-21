// ✅ Problem: Capacity To Ship Packages Within D Days
// 🔗 Link: https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/description/
// 🗂 Topic: binary_search
// ⏱ Time Complexity: O(N∗Log(Sum(Weights)))
// 💾 Space Complexity: O(1)
// 🧠 Approach: Binary Search

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool check(int mid, vector<int>& weights, int days){
        int n=weights.size();
        int m=mid;
        int count=1; //Count the number of days
        for(int i=0; i<n; i++){
            if(m>=weights[i]){
                m-=weights[i];
            }else{
                count++;
                m=mid;
                m-=weights[i];
            }
        }
        if(count>days) return false;
            else return true;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int max=INT_MIN; //maximum capacity
        int sum=0; //total weight

        for(int i=0; i<n; i++){
            if(max<weights[i]) max=weights[i];
            sum+=weights[i];
        }
        //binary search
        int low=max;
        int high=sum;
        int mid;
        int MinCapacity;

        while(low<=high){
           mid=low+(high-low)/2;
        if(check(mid, weights, days)){
            MinCapacity=mid;
            high=mid-1; //we're looking for minimum so high is reducing
        }else low= mid+1;
        }
        return MinCapacity;
        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
