import os
from datetime import datetime

# ====== 🧠 User Input ======
number = input("LeetCode Problem Number (e.g. 27): ").zfill(3)
name = input("Problem Name (e.g. Remove Element): ")
topic = input("Topic (e.g. Arrays): ")
link = input("LeetCode Link (paste full URL): ")

# ====== 🗂 File and Folder ======
filename = f"{number}_{name.lower().replace(' ', '_')}.cpp"
dir_path = os.path.join("solutions", topic.lower())
os.makedirs(dir_path, exist_ok=True)
file_path = os.path.join(dir_path, filename)

# ====== 🧾 C++ Template ======
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

# ====== 💾 Write Code File ======
with open(file_path, "w", encoding="utf-8") as f:
    f.write(template)

# Convert path to markdown-friendly forward slashes
markdown_path = file_path.replace("\\", "/")

# ====== 📝 Update README ======
readme_path = "README.md"
today = datetime.now().strftime("%Y-%m-%d")
new_row = f"| {today} | {name} | {topic} | C++ | [View]({markdown_path}) |\n"

with open(readme_path, "r", encoding="utf-8") as f:
    lines = f.readlines()

# Find Daily Log Table
table_start_index = next((i for i, line in enumerate(lines) if line.strip().startswith("| Date")), None)
if table_start_index is not None:
    lines.insert(table_start_index + 2, new_row)  # Add after header and separator

# ====== 📊 Update Progress Bar ======
solved_count = sum(1 for line in lines if line.strip().startswith("| 202"))

progress_index = next((i for i, line in enumerate(lines) if "progress-bar.dev" in line), None)
if progress_index is not None:
    lines[progress_index] = f"![Progress](https://img.shields.io/badge/Completed-{solved_count}%2F100-4caf50)\n"

# ====== 💾 Save README ======
with open(readme_path, "w", encoding="utf-8") as f:
    f.writelines(lines)

# ====== ✅ Output ======
print(f"\n✅ Created: {file_path}")
print(f"📈 Updated README with new entry and progress ({solved_count}/100).")
