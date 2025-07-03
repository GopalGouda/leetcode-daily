import os
from datetime import datetime

# Prompt user input
number = input("LeetCode Problem Number (e.g. 75): ").zfill(3)
name = input("Problem Name (e.g. Sort Colors): ")
topic = input("Topic (e.g. Arrays): ")
link = input("LeetCode Link (paste full URL): ")

# Format filename and directory
filename = f"{number}_{name.lower().replace(' ', '_')}.cpp"
dir_path = f"solutions/{topic.lower()}"
os.makedirs(dir_path, exist_ok=True)

file_path = os.path.join(dir_path, filename)

# Template code
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

# Write to .cpp file
with open(file_path, "w", encoding="utf-8") as f:
    f.write(template)

# Update README
readme_path = "README.md"
today = datetime.now().strftime("%Y-%m-%d")
new_entry = f"| {today} | {name} | {topic} | C++ | [View]({file_path}) |\n"

with open(readme_path, "r", encoding="utf-8") as f:
    lines = f.readlines()

# Insert new row in the table (after header row)
for i, line in enumerate(lines):
    if line.strip().startswith("| Date"):
        table_start = i + 2
        break

lines.insert(table_start, new_entry)

# Update progress bar
solved_count = sum(1 for line in lines if line.startswith("| 202"))
progress_line_index = next((i for i, line in enumerate(lines) if "progress-bar.dev" in line), None)
if progress_line_index is not None:
    progress = f"![Progress](https://progress-bar.dev/{solved_count}/?scale=100&title=Completed&width=300&color=4caf50)\n"
    lines[progress_line_index] = progress

# Write back to README
with open(readme_path, "w", encoding="utf-8") as f:
    f.writelines(lines)

print(f"✅ {filename} created and README.md updated with progress ({solved_count}/100).")
