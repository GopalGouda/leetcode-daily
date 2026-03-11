// ✅ Problem: Apply Transform Over Each Element in Array
// 🔗 Link: https://leetcode.com/problems/apply-transform-over-each-element-in-array/description/
// 🗂 Topic: basic_javascript
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(N)
// 🧠 Approach: 

var map = function(arr, fn) {
        let result = [];
    
    for (let i = 0; i < arr.length; i++) {
        result[i] = fn(arr[i], i);
    }
    
    return result;
    
};
