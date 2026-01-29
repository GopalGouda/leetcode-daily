// ✅ Problem: Is Object Empty
// 🔗 Link: https://leetcode.com/problems/is-object-empty/description/
// 🗂 Topic: object
// ⏱ Time Complexity: O(N)
// 💾 Space Complexity: O(N)
// 🧠 Approach: 

/**
 * @param {Object|Array} obj
 * @return {boolean}
 */
var isEmpty = function(obj) {
 if (Array.isArray(obj)) {   // built-in JS check
        return obj.length === 0;
    }
    return Object.keys(obj).length === 0;    
};
