# Quick Start Guide 🚀

Welcome! This guide will help you get started with the LLD Practice Repository in just a few minutes.

## 📋 Prerequisites

Before you begin, make sure you have:

- [ ] A GitHub account
- [ ] Git installed on your computer
- [ ] A C++ compiler (GCC, Clang, or MSVC)
- [ ] A code editor (VS Code, CLion, Vim, etc.)

### Check Your Setup

```bash
# Check Git
git --version

# Check C++ compiler
g++ --version  # or clang++ --version

# If not installed:
# Windows: Install MinGW or Visual Studio
# Linux: sudo apt install g++
# Mac: xcode-select --install
```

---

## 🎯 Getting Started (5 Minutes)

### Step 1: Fork the Repository (30 seconds)

1. Go to the repository on GitHub
2. Click the **"Fork"** button (top right)
3. Wait for GitHub to create your copy

### Step 2: Clone Your Fork (1 minute)

```bash
# Clone your fork
git clone https://github.com/YOUR_USERNAME/LLD.git

# Navigate into the folder
cd LLD

# Add the original repository as upstream
git remote add upstream https://github.com/ORIGINAL_OWNER/LLD.git
```

### Step 3: Explore the Problems (2 minutes)

```bash
# List all problems
ls problems/

# Read a problem
cat problems/01-toll-gate-system/README.md
```

### Step 4: Create Your First Solution (2 minutes)

```bash
# Create a branch for your solution
git checkout -b solution/toll-gate-yourname

# Navigate to the problem
cd problems/01-toll-gate-system/solutions/

# Create your solution file
touch solution_yourname.cpp

# Open in your editor
code solution_yourname.cpp  # or vim, nano, etc.
```

---

## 💻 Writing Your Solution

### Template to Use

```cpp
/**
 * Problem: Toll Gate System
 * Author: Your Name
 * Date: 2026-01-30
 * 
 * Approach: [Explain your approach]
 * Design Patterns: [List patterns used]
 */

#include <iostream>
using namespace std;

// Your solution here

int main() {
    // Test your solution
    return 0;
}
```

### Compile and Test

```bash
# Compile
g++ -std=c++17 solution_yourname.cpp -o solution

# Run
./solution        # Linux/Mac
solution.exe      # Windows

# Test thoroughly!
```

---

## 📤 Submitting Your Solution

### Step 1: Commit Your Changes

```bash
# Go back to repository root
cd ../../..

# Add your file
git add problems/01-toll-gate-system/solutions/solution_yourname.cpp

# Commit with a good message
git commit -m "Add solution for Toll Gate by Your Name"
```

### Step 2: Push to GitHub

```bash
git push origin solution/toll-gate-yourname
```

### Step 3: Create Pull Request

1. Go to your fork on GitHub
2. Click **"Compare & pull request"**
3. Fill in the template:
   - Title: `Solution: Toll Gate System by Your Name`
   - Describe your approach
   - List design patterns used
4. Click **"Create pull request"**

### Step 4: Wait for Review

- Maintainers will review your code
- They might suggest improvements
- Once approved, it will be merged! 🎉

---

## 📚 What to Learn

### For Beginners

Start with these problems:
1. ✅ **Problem 01: Toll Gate System** (Basic OOP)
2. ✅ **Problem 03: Library Management** (More OOP)

### For Intermediate

Try these:
1. 🔥 **Problem 02: Parking Lot** (Factory + Strategy patterns)
2. 🔥 **Problem 04: Hotel Booking** (Observer pattern)

### For Advanced

Challenge yourself:
1. 💪 **Problem 05: Elevator System** (State machines)
2. 💪 **Problem 08: Chess Game** (Multiple patterns)

---

## 🎓 Learning Path

### Week 1: Fundamentals
- [ ] Solve 1-2 easy problems
- [ ] Review others' solutions
- [ ] Learn basic design patterns

### Week 2: Intermediate
- [ ] Solve 2-3 medium problems
- [ ] Implement different patterns
- [ ] Start reviewing PRs

### Week 3: Advanced
- [ ] Tackle hard problems
- [ ] Propose new problems
- [ ] Help other contributors

---

## 🛠️ Common Commands

### Syncing Your Fork
```bash
git fetch upstream
git checkout main
git merge upstream/main
git push origin main
```

### Starting New Solution
```bash
git checkout main
git pull upstream main
git checkout -b solution/problem-name-yourname
```

### Checking Status
```bash
git status
git branch
git log --oneline
```

---

## 💡 Tips for Success

### Code Quality
- ✅ Write clear comments
- ✅ Use meaningful variable names
- ✅ Follow SOLID principles
- ✅ Test edge cases

### Collaboration
- ✅ Be respectful in reviews
- ✅ Ask questions if stuck
- ✅ Help others learn
- ✅ Share your knowledge

### Learning
- ✅ Study the problem first
- ✅ Plan before coding
- ✅ Review others' solutions
- ✅ Learn from feedback

---

## 🆘 Need Help?

### Stuck on a Problem?
1. Re-read the problem statement
2. Check similar patterns online
3. Look at the sample solution (last resort)
4. Ask in GitHub Discussions

### Git Issues?
1. Check the [WORKFLOW.md](WORKFLOW.md) guide
2. Search for your error message
3. Ask in GitHub Issues

### Code Not Compiling?
1. Check for syntax errors
2. Verify includes and namespaces
3. Test with simple example first
4. Ask for help with error message

---

## 🎯 Your First Goal

**Complete these steps to become a contributor:**

- [ ] Fork and clone the repository
- [ ] Solve one problem (any difficulty)
- [ ] Submit a pull request
- [ ] Get your PR merged

**Time estimate: 1-2 hours**

---

## 📖 Additional Resources

- **Full Guide**: [CONTRIBUTING.md](CONTRIBUTING.md)
- **Detailed Workflow**: [WORKFLOW.md](WORKFLOW.md)
- **Design Patterns**: [Refactoring Guru](https://refactoring.guru/)
- **C++ Reference**: [cppreference.com](https://en.cppreference.com/)

---

## 🌟 Next Steps

After your first contribution:

1. **Solve more problems** - Challenge yourself
2. **Review others' code** - Learn different approaches
3. **Propose new problems** - Share your ideas
4. **Join discussions** - Be part of the community

---

**Ready to start?** Pick a problem and begin coding! 

**Remember**: The goal is to learn and improve. Don't worry about making mistakes - that's how we grow! 🚀

Got questions? Open an issue or discussion. We're here to help! 🤝
