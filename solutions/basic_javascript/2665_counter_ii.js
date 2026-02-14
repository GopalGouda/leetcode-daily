// ✅ Problem: Counter II
// 🔗 Link: https://leetcode.com/problems/counter-ii/submissions/1919296237/
// 🗂 Topic: basic_javascript
// ⏱ Time Complexity: O()
// 💾 Space Complexity: O()
// 🧠 Approach: 

/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
    let current = init;
    
    return {
        increment: function() {
            current += 1;
            return current;
        },
        decrement: function() {
            current -= 1;
            return current;
        },
        reset: function() {
            current = init;
            return current;
        }
    };
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */