// ✅ Problem: Sort By
// 🔗 Link: https://leetcode.com/problems/sort-by/description/
// 🗂 Topic: basic_javascript
// ⏱ Time Complexity: O(NLogN)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

/**
 * @param {Array} arr
 * @param {Function} fn
 * @return {Array}
 */
var sortBy = function(arr, fn) {
    return arr.sort((a, b) => fn(a) - fn(b));
    
};
