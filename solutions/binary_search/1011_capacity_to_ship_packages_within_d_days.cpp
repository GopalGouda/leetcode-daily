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
        int m=mid; //capacity;
        int count=1; //It will count the numbers of days. starts with day-1
        for(int i=0; i<n; i++){
            if(m>=weights[i]){
                m-=weights[i];
            }else{
                count++;
                m=mid; //restart the capacity;
                m-=weights[i]; //so that the loop don't skip the 'i'
            }
        }
        if(count<=days)return true;
        else return false;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int max=INT_MIN; //it will store the minimum capacity of ship(but not confirm within the days or not)
        int sum=0; //It will store the maximum capacity of ship
        int n=weights.size();
        for(int i=0; i<n; i++){
            if(max<weights[i]) max=weights[i];
            sum+=weights[i];
        }
        //Binary search
        int low=max;
        int high=sum;
        int mid; //Capacity
        int MinCapacity; //It will store the actual minimum capacity
        while(low<=high){
            mid=low+(high-low)/2;
            if(check(mid,weights, days )){ //check if the mid can do it within the given days
                MinCapacity= mid;
                high= mid-1; //we will check if there any smaller capacity
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
