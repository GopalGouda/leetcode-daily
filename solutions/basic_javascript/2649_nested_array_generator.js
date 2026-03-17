// ✅ Problem: Nested Array Generator
// 🔗 Link: https://leetcode.com/problems/nested-array-generator/description/
// 🗂 Topic: basic_javascript
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(N)
// 🧠 Approach: 

var inorderTraversal = function*(arr) {
    for (const item of arr) {
        if (Array.isArray(item)) {
            yield* inorderTraversal(item); // recurse
        } else {
            yield item; // yield integer
        }
    }    
};