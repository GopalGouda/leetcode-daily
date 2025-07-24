// ✅ Problem: Koko Eating Bananas
// 🔗 Link: https://leetcode.com/problems/koko-eating-bananas/description/
// 🗂 Topic: binary_search
// ⏱ Time Complexity: O(Nlogm)
// 💾 Space Complexity: O(1)
// 🧠 Approach: Binary Search

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool check(int mid, vector<int>& piles, int h){
        int n=piles.size();
        int count=0;
        for(int i=0; i<n; i++){
            count+= (piles[i] + mid -1)/mid; //Equivalent to ceil(piles[i] / mid)
            if(count>h) return false; // if count is >hours then no need to check further.
        }
        if(count>h) return false;
        else return true;

    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int max=INT_MIN;
        max=*max_element(piles.begin(), piles.end()); //find the maximum;

        
        //binary search
        int lo=1;
        int hi=max;
        int mid;
        int ans;
        while(lo<=hi){
            mid= lo+(hi-lo)/2;
            if(check(mid, piles, h)){ //check if koko is eating bananas in minimum time
                ans=mid;
                hi= mid-1;// Try smaller speed
            }else lo= mid+1;// Need high speed
            
        }
        return ans;
    }
};


int main() {
    Solution sol;
    // Test cases
    return 0;
}
