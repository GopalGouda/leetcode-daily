// ✅ Problem: Happy Number
// 🔗 Link: https://leetcode.com/problems/happy-number/description/
// 🗂 Topic: hash_table
// ⏱ Time Complexity: O(log n)
// 💾 Space Complexity: O(log n)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int getNext(int n) {
        int sum = 0;
        while (n > 0) {
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }
        return sum;
    }

    bool isHappy(int n) {
        unordered_set<int> seen;

        while (n != 1 && seen.find(n) == seen.end()) {
            seen.insert(n);
            n = getNext(n);
        }

        return n == 1;
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
