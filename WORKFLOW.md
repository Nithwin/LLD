# Workflow Guide for Contributors

This guide provides step-by-step instructions for contributing to the LLD Practice Repository.

## 🎯 Quick Start Guide

### For First-Time Contributors

#### 1. Fork the Repository
1. Visit the repository on GitHub
2. Click the "Fork" button in the top-right corner
3. Wait for GitHub to create your fork

#### 2. Clone Your Fork
```bash
git clone https://github.com/YOUR_USERNAME/LLD.git
cd LLD
```

#### 3. Set Up Remote
```bash
# Check your current remotes
git remote -v

# Add the original repository as 'upstream'
git remote add upstream https://github.com/ORIGINAL_OWNER/LLD.git

# Verify
git remote -v
# You should see:
# origin    https://github.com/YOUR_USERNAME/LLD.git (fetch)
# origin    https://github.com/YOUR_USERNAME/LLD.git (push)
# upstream  https://github.com/ORIGINAL_OWNER/LLD.git (fetch)
# upstream  https://github.com/ORIGINAL_OWNER/LLD.git (push)
```

---

## 💻 Solving a Problem

### Step 1: Choose a Problem
1. Browse the [problem list](../README.md#problem-list)
2. Pick a problem marked as "📝 Open"
3. Read the problem statement in its folder

### Step 2: Sync Your Fork
```bash
# Make sure you're on main branch
git checkout main

# Fetch latest changes from upstream
git fetch upstream

# Merge upstream changes
git merge upstream/main

# Push updates to your fork
git push origin main
```

### Step 3: Create Your Solution Branch
```bash
# Branch naming: solution/<problem-name>-<your-name>
git checkout -b solution/parking-lot-john

# Verify you're on the new branch
git branch
```

### Step 4: Navigate to Problem Folder
```bash
cd problems/XX-problem-name/
ls  # Check the contents
```

### Step 5: Create Your Solution File
```bash
cd solutions/
# Create your solution file
# Windows:
type nul > solution_yourname.cpp
# Linux/Mac:
touch solution_yourname.cpp
```

### Step 6: Write Your Solution

Open the file in your editor and follow this template:

```cpp
/**
 * ============================================
 * Problem: [Problem Name]
 * Author: [Your Name]
 * Date: [Date]
 * GitHub: @[your-github-username]
 * ============================================
 * 
 * APPROACH:
 * [Explain your high-level approach]
 * 
 * DESIGN PATTERNS USED:
 * - Pattern 1: [Why you used it]
 * - Pattern 2: [Why you used it]
 * 
 * KEY DESIGN DECISIONS:
 * 1. [Decision 1 and reasoning]
 * 2. [Decision 2 and reasoning]
 * 
 * COMPLEXITY:
 * - Time: O(?)
 * - Space: O(?)
 * 
 * ============================================
 */

#include <iostream>
#include <vector>
#include <string>
// Add other necessary headers

using namespace std;

// Your solution code here
class YourClass {
    // Implementation
};

int main() {
    // Test your solution
    return 0;
}
```

### Step 7: Compile and Test
```bash
# Compile your solution
g++ -std=c++17 solution_yourname.cpp -o solution

# Run it
./solution  # Linux/Mac
solution.exe  # Windows

# Test with different inputs
# Make sure it handles edge cases
```

### Step 8: Commit Your Changes
```bash
# Go back to repository root
cd ../../..

# Check status
git status

# Stage your file
git add problems/XX-problem-name/solutions/solution_yourname.cpp

# Commit with meaningful message
git commit -m "Add solution for [Problem Name] by [Your Name]

- Implemented [Pattern 1] and [Pattern 2]
- Handles all test cases
- Added detailed comments"
```

### Step 9: Push to Your Fork
```bash
git push origin solution/parking-lot-john
```

### Step 10: Create Pull Request
1. Go to your fork on GitHub
2. You'll see "Compare & pull request" button - click it
3. Fill in the PR template:
   - Choose a descriptive title
   - Explain your approach
   - List design patterns used
   - Mention any special considerations
4. Click "Create pull request"

### Step 11: Wait for Review
- Maintainers will review your PR
- They may request changes
- Address feedback and push updates
- Once approved, your PR will be merged!

---

## 📝 Adding a New Problem

### Step 1: Create Problem Branch
```bash
git checkout main
git pull upstream main
git checkout -b problem/new-problem-name
```

### Step 2: Create Problem Structure
```bash
# Create problem folder (use next number)
mkdir -p problems/XX-problem-name/solutions
cd problems/XX-problem-name
```

### Step 3: Create Problem README

Create `README.md` with this structure:

```markdown
# Problem XX: Problem Name

## Difficulty: [Easy/Medium/Hard]

## Problem Statement
[Clear description]

## Requirements
### Functional Requirements
1. 
2. 

### Non-Functional Requirements
1. 
2. 

## Expected Classes/Entities
- Class 1: Purpose
- Class 2: Purpose

## Design Patterns to Consider
- Pattern 1
- Pattern 2

## Example Usage
```cpp
// Example code
```

## Test Cases
### Test Case 1:
**Input**: 
**Expected Output**: 

## Evaluation Criteria
- [ ] Criterion 1
- [ ] Criterion 2
```

### Step 4: Add Sample Solution (Optional)
```bash
# Create sample solution
touch sample_solution.cpp
# Implement a reference solution
```

### Step 5: Update Main README
Edit the main `README.md` to add your problem to the table:

```markdown
| XX | [Problem Name](./problems/XX-problem-name/) | Difficulty | Concepts | 📝 Open |
```

### Step 6: Commit and Push
```bash
git add .
git commit -m "Add new problem: [Problem Name]"
git push origin problem/new-problem-name
```

### Step 7: Create PR
Follow the same PR process as solutions

---

## 🔄 Keeping Your Fork Updated

### Regularly Sync
```bash
# Fetch and merge upstream changes
git checkout main
git fetch upstream
git merge upstream/main
git push origin main
```

### Before Starting New Work
Always sync before creating a new branch:
```bash
git checkout main
git pull upstream main
git checkout -b new-branch-name
```

---

## 🐛 Fixing Issues

### If You Made a Mistake
```bash
# Undo last commit (keep changes)
git reset --soft HEAD~1

# Undo last commit (discard changes)
git reset --hard HEAD~1

# Discard local changes
git checkout -- filename
```

### If Your Branch is Behind
```bash
# Rebase your branch on latest main
git checkout your-branch
git fetch upstream
git rebase upstream/main

# If conflicts, resolve them then:
git add .
git rebase --continue

# Force push (only on your branch!)
git push origin your-branch --force
```

---

## 📊 Workflow Diagram

```
┌─────────────────┐
│  Fork Repo      │
└────────┬────────┘
         │
         ▼
┌─────────────────┐
│  Clone Fork     │
└────────┬────────┘
         │
         ▼
┌─────────────────┐
│  Create Branch  │
└────────┬────────┘
         │
         ▼
┌─────────────────┐
│  Write Code     │
└────────┬────────┘
         │
         ▼
┌─────────────────┐
│  Test & Commit  │
└────────┬────────┘
         │
         ▼
┌─────────────────┐
│  Push to Fork   │
└────────┬────────┘
         │
         ▼
┌─────────────────┐
│  Create PR      │
└────────┬────────┘
         │
         ▼
┌─────────────────┐
│  Code Review    │
└────────┬────────┘
         │
         ▼
┌─────────────────┐
│  Merge!         │
└─────────────────┘
```

---

## 💡 Best Practices

### Branch Names
✅ Good:
- `solution/parking-lot-john`
- `problem/movie-booking`
- `fix/readme-typo`

❌ Bad:
- `my-solution`
- `test`
- `feature`

### Commit Messages
✅ Good:
```
Add solution for Parking Lot by John Doe

- Implemented Factory and Strategy patterns
- Added comprehensive comments
- Tested with all provided test cases
```

❌ Bad:
```
update
fix
solution
```

### Code Style
- Use consistent indentation (4 spaces)
- Add meaningful variable names
- Comment complex logic
- Follow C++ best practices

---

## 🆘 Getting Help

### Common Issues

**Issue**: Can't push to upstream
**Solution**: You can only push to your fork (`origin`), not `upstream`

**Issue**: Merge conflicts
**Solution**: 
```bash
git status  # See conflicted files
# Edit files to resolve conflicts
git add .
git commit
```

**Issue**: Branch is behind main
**Solution**: Rebase on latest main (see section above)

### Where to Ask
- GitHub Discussions
- Issue with "question" label
- Discord/Slack (coming soon)

---

## 🎉 After Your PR is Merged

1. **Sync your fork**
   ```bash
   git checkout main
   git pull upstream main
   git push origin main
   ```

2. **Delete your branch** (optional)
   ```bash
   # Delete local branch
   git branch -d solution/problem-name
   
   # Delete remote branch
   git push origin --delete solution/problem-name
   ```

3. **Celebrate!** 🎊 You're now a contributor!

---

**Happy Contributing!** If you have questions about this workflow, open an issue with the "question" label.
