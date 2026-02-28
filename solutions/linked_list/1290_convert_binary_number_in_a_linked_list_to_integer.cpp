// ✅ Problem: Convert Binary Number in a Linked List to Integer
// 🔗 Link: https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/description/
// 🗂 Topic: Linked_List
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    
    ListNode(int x) {
        val = x;
        next = nullptr;
    }
};

class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int result = 0;
        while (head != nullptr) {
            result = (result << 1) | head->val;
            head = head->next;
        }
        return result;
    }
};

int main() {
    // Create linked list: 1 -> 0 -> 1
    ListNode* head = new ListNode(1);
    head->next = new ListNode(0);
    head->next->next = new ListNode(1);

    Solution sol;
    cout << sol.getDecimalValue(head);   // Output: 5
}