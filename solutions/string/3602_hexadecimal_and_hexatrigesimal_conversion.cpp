// ✅ Problem: Hexadecimal and Hexatrigesimal Conversion
// 🔗 Link: https://leetcode.com/problems/hexadecimal-and-hexatrigesimal-conversion/description/
// 🗂 Topic: string
// ⏱ Time Complexity: O(1)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    string concatHex36(int n) {
 long long n2 = 1LL * n * n;
        long long n3 = n2 * n;

        auto convert = [&](long long num, int base) {
            if (num == 0LL) return string("0");
            string res = "";
            while (num > 0) {
                int rem = num % base;
                if (rem < 10)
                    res.push_back('0' + rem);
                else
                    res.push_back('A' + (rem - 10));
                num /= base;
            }
            reverse(res.begin(), res.end());
            return res;
        };

        return convert(n2, 16) + convert(n3, 36);        
    }
};

int main() {
    Solution sol;
    // Test cases
    return 0;
}
