import os
from datetime import date

# === User Input ===
problem_number = input("Enter LeetCode Problem Number (e.g. 26): ").zfill(3)
problem_name = input("Enter Problem Name (e.g. Remove Duplicates from Sorted Array): ").strip()
topic = input("Enter Topic (e.g. arrays): ").strip().lower()
leetcode_link = input("Enter LeetCode URL (e.g. https://leetcode.com/problems/remove-duplicates-from-sorted-array): ").strip()

# === Filename and Path Setup ===
file_safe_name = problem_name.lower().replace(" ", "_")
folder_path = f"solutions/{topic}"
os.makedirs(folder_path, exist_ok=True)

file_path = f"{folder_path}/{problem_number}_{file_safe_name}.cpp"

# === Template ===
template = f"""// ✅ Problem: {problem_name}
// 🔗 Link: {leetcode_link}
// 🗂 Topic: {topic.capitalize()}
// ⏱ Time Complexity: O(.)
// 💾 Space Complexity: O(.)
// 🧠 Approach: Describe your logic here

#include <iostream>
#include <vector>
using namespace std;

class Solution {{
public:
    // Your solution goes here
}};

int main() {{
    Solution sol;
    // Test cases can be written here
    return 0;
}}
"""

# === Write the File ===
with open(file_path, "w", encoding="utf-8") as f:
    f.write(template)

print(f"✅ Created file at: {file_path}")

# === Update README.md ===
today = date.today().isoformat()
solution_link = f"[View]({file_path})"

new_row = f"| {today} | {problem_name} | {topic.capitalize()} | C++ | {solution_link} |\n"

# Read existing README
with open("README.md", "r", encoding="utf-8") as f:
    content = f.readlines()

# Find and update the table
table_start = next(i for i, line in enumerate(content) if line.strip().startswith("| Date"))
insert_index = table_start + 2  # skip header + separator

content.insert(insert_index, new_row)

# === Update Progress Bar ===
solved_count = sum(1 for line in content if line.strip().startswith("| 202"))  # crude count of rows
progress_line_index = next(i for i, line in enumerate(content) if "progress-bar.dev" in line)
content[progress_line_index] = f"📊 ![Progress](https://progress-bar.dev/{solved_count}/?scale=100&title=Completed&width=300&color=4caf50)\n"

# Write back to README
with open("README.md", "w", encoding="utf-8") as f:
    f.writelines(content)

print(f"✅ README updated with new entry and progress ({solved_count} problems).")
