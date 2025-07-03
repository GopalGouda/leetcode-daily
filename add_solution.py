import os
import re
from datetime import datetime

# Helper to convert to snake_case
def to_snake_case(name):
    name = re.sub(r'[^\w\s]', '', name)
    return '_'.join(name.lower().split())

# Get user input
problem_name = input("Problem Name: ").strip()
question_number = input("Question Number (e.g., 1): ").strip()
topic = input("Topic (e.g., Arrays): ").strip()
leetcode_link = input("LeetCode URL: ").strip()

# Generate filename
problem_snake = to_snake_case(problem_name)
filename = f"{int(question_number):03d}_{problem_snake}.cpp"

# Paths
topic_folder = f"solutions/{topic.lower()}"
os.makedirs(topic_folder, exist_ok=True)
file_path = os.path.join(topic_folder, filename)

# Template
template = f"""// Question Name: {problem_name}
// LeetCode Link: {leetcode_link}
// Topic: {topic}
// Time Complexity: O(.)
// Space Complexity: O(.)

//Approach:


#include <iostream>
#include <vector>
using namespace std;

class Solution {{
public:
    // Your function here
}};

int main() {{
    Solution sol;
    // Test cases here
    return 0;
}}
"""

# Write to .cpp file
with open(file_path, 'w', encoding='utf-8') as f:
    f.write(template)

print(f"Created: {file_path}")

# Update README.md
readme_path = "README.md"
today = datetime.today().strftime("%Y-%m-%d")

new_row = f"| {today} | {problem_name} | {topic} | C++ | [View]({file_path}) |\n"

# Insert row into README.md
with open(readme_path, 'r', encoding='utf-8') as f:
    lines = f.readlines()

for i, line in enumerate(lines):
    if line.strip().startswith("| Date"):
        lines.insert(i + 2, new_row)
        break

with open(readme_path, 'w', encoding='utf-8') as f:
    f.writelines(lines)

print("README.md updated successfully.")
