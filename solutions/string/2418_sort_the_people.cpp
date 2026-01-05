// ✅ Problem: Sort the People
// 🔗 Link: https://leetcode.com/problems/sort-the-people/description/
// 🗂 Topic: string
// ⏱ Time Complexity: O(Nlogn)
// 💾 Space Complexity: O(N)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int, string>> people;
        
        for (int i = 0; i < names.size(); i++) {
            people.push_back({heights[i], names[i]});
        }
        
        sort(people.begin(), people.end(), greater<>());
        
        vector<string> result;
        for (auto &p : people) {
            result.push_back(p.second);
        }
        
        return result;        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
