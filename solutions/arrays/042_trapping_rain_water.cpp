// ✅ Problem: Trapping Rain Water
// 🔗 Link: https://leetcode.com/problems/trapping-rain-water/description/
// 🗂 Topic: arrays
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(1)
// 🧠 Approach: Two pointer

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
         int n=height.size();
        int Left=0, Right=n-1;     // pointers to travel
        int LeftMax=0, RightMax=0; //left & right maximum height
        int water=0;               //calculate the water

        while(Left<Right){
            // Find the Left and Right Maximum
            LeftMax=max(LeftMax, height[Left]);
            RightMax=max(RightMax, height[Right]);
            
            if(LeftMax<RightMax){
                water+=LeftMax- height[Left];
                Left++;
            }else{
                water+=RightMax- height[Right];
                Right--;
            }
        }
         return water;   
    }
};
