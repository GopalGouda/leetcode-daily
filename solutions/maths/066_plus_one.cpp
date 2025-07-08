// ✅ Problem: plus one
// 🔗 Link: https://leetcode.com/problems/plus-one/submissions/1689909146/
// 🗂 Topic: maths
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(1)
// 🧠 Approach: Traverse digits from end, add 1, manage carry, and insert carry at front if needed

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n= digits.size();
        int sum=0;
        int carry=1; // as we are going to add one
        for(int i=n-1; i>=0; i--){ // Iterate from the last digit to the first
           sum= digits[i]+carry;
           digits[i]=sum%10;
           carry=sum/10;
           if(carry==0){  //stop the loop if there is no carry
            break;
           }
        }
        if(carry>0){ //for case like 999 + 1
           digits.insert(digits.begin(), carry);
        }
        return digits;

    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
