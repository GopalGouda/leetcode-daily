// ✅ Problem: First Bad Version
// 🔗 Link: https://leetcode.com/problems/first-bad-version/description/
// 🗂 Topic: binary_search
// ⏱ Time Complexity: O(log n)
// 💾 Space Complexity: O(1)
// 🧠 Approach: Binary Search

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


#include <iostream>
using namespace std;

// Mock API for local testing
int bad = 4;

bool isBadVersion(int version) {
    return version >= bad;
}

class Solution {
public:
    int firstBadVersion(int n) {
        int left = 1, right = n;

        while (left < right) {
            int mid = left + (right - left) / 2;

            if (isBadVersion(mid)) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }

        return left;
    }
};

int main() {
    Solution sol;
    cout << sol.firstBadVersion(5) << endl;
    return 0;
}


int main() {
    Solution sol;
    // Test cases
    return 0;
}
