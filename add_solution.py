import os
from datetime import datetime

# User Input
number = input("LeetCode Problem Number (e.g. 27): ").zfill(3)
name = input("Problem Name (e.g. Remove Element): ")
topic = input("Topic (e.g. Arrays): ")
link = input("LeetCode Link (paste full URL): ")

# File and folder naming
filename = f"{number}_{name.lower().replace(' ', '_')}.cpp"
dir_path = os.path.join("solutions", topic.lower())
os.makedirs(dir_path, exist_ok=True)

file_path = os.path.join(dir_path, filename)

# Template
template = f"""// ✅ Problem: {name}
// 🔗 Link: {link}
// 🗂 Topic: {topic}
// ⏱ Time Complexity: O(.)
// 💾 Space Complexity: O(.)
// 🧠 Approach: 

#include <iostream>
#include <vector>
using namespace std;

class Solution {{
public:
    // Your code here
}};

int main() {{
    Solution sol;
    // Test cases
    return 0;
}}
"""

# Write code file
with open(file_path, "w", encoding="utf-8") as f:
    f.write(template)

# Format for markdown path
markdown_path = file_path.replace("\\", "/")

# Update README
readme_path = "README.md"
today = datetime.now().strftime("%Y-%m-%d")
new_row = f"| {today} | {name} | {topic} | C++ | [View]({markdown_path}) |\n"

with open(readme_path, "r", encoding="utf-8") as f:
    lines = f.readlines()

# Find the daily log table and insert row at the top
table_start_index = next((i for i, line in enumerate(lines) if line.strip().startswith("| Date")), None)
if table_start_index is not None:
    lines.insert(table_start_index + 2, new_row)  # +2 to skip the header and separator

# Count total solved problems for progress
solved_count = sum(1 for line in lines if line.startswith("| 202"))

# Replace progress bar
progress_line_index = next((i for i, line in enumerate(lines) if "progress-bar.dev" in line), None)
if progress_line_index is not None:
    lines[progress_line_index] = f"![Progress](https://progress-bar.dev/{solved_count}/?scale=100&title=Completed&width=300&color=4caf50)\n"

# Save README
with open(readme_path, "w", encoding="utf-8") as f:
    f.writelines(lines)

print(f"\n✅ Created: {file_path}")
print(f"📈 Updated README with new entry and progress bar ({solved_count}/100).")
