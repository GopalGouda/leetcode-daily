// ✅ Problem: Find Greatest Common Divisor of Array
// 🔗 Link: https://leetcode.com/problems/find-greatest-common-divisor-of-array/description/?envType=problem-list-v2&envId=n8ahh1k5
// 🗂 Topic: arrays
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int gcd(int a, int b){
        while(b!=0){
            int temp=b;
            b= a%b;
            a=temp;
        }
        return a;
    }
    int findGCD(vector<int>& nums) {
        int smallest= *min_element(nums.begin(), nums.end());
        int largest= *max_element(nums.begin(), nums.end());
        return gcd(smallest, largest);
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
