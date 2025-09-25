// ✅ Problem: Kids With the Greatest Number of Candies
// 🔗 Link: https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/description/?envType=problem-list-v2&envId=n8ahh1k5
// 🗂 Topic: arrays
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(N)
// 🧠 Approach: compare maximum candies with candies[i]+extraCandies

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result(candies.size());
        int maxx= *max_element(candies.begin(), candies.end());
        for(int i=0; i<candies.size(); i++){
            if(candies[i]+extraCandies>=maxx)result[i]=true;
            else result[i]=false;
        }
        return result;
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
