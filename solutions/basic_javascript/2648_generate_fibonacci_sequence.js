// ✅ Problem: Generate Fibonacci Sequence
// 🔗 Link: https://leetcode.com/problems/generate-fibonacci-sequence/description/
// 🗂 Topic: basic_javascript
// ⏱ Time Complexity: O(1)
// 💾 Space Complexity: O(1)
// 🧠 Approach: 

/**
 * @return {Generator<number>}
 */
var fibGenerator = function*() {
    let a = 0, b = 1;
    
    while (true) {
        yield a;
        [a, b] = [b, a + b];
    }
};

/**
 * const gen = fibGenerator();
 * gen.next().value; // 0
 * gen.next().value; // 1
 */