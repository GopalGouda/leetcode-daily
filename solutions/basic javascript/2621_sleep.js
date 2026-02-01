// ✅ Problem: sleep
// 🔗 Link: https://leetcode.com/problems/sleep/description/
// 🗂 Topic: basic javascript
// ⏱ Time Complexity: O(1)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

/**
 * @param {number} millis
 * @return {Promise}
 */
async function sleep(millis) {
return new Promise(resolve => setTimeout(resolve, millis));
}

/** 
 * let t = Date.now()
 * sleep(100).then(() => console.log(Date.now() - t)) // 100
 */
