# Contributing to LLD Practice Repository

Thank you for your interest in contributing! This document provides guidelines and workflows for contributing to this repository.

## 🌟 Ways to Contribute

### 1. Solve a Problem ✅
Implement solutions to existing problems.

### 2. Add New Problems 📝
Propose and create new LLD problems.

### 3. Improve Documentation 📚
Enhance problem statements, add diagrams, or improve guides.

### 4. Review Solutions 👀
Help review and provide feedback on pull requests.

## 🔄 Contribution Workflow

### For Solving Problems

#### Step 1: Fork and Clone
```bash
# Fork the repository on GitHub (click Fork button)

# Clone your fork
git clone https://github.com/YOUR_USERNAME/LLD.git
cd LLD

# Add upstream remote
git remote add upstream https://github.com/ORIGINAL_OWNER/LLD.git
```

#### Step 2: Sync with Upstream
```bash
# Fetch latest changes
git fetch upstream

# Checkout main branch
git checkout main

# Merge upstream changes
git merge upstream/main
```

#### Step 3: Create a Solution Branch
```bash
# Branch naming convention: solution/<problem-name>-<your-name>
git checkout -b solution/parking-lot-john

# Examples:
# git checkout -b solution/toll-gate-sarah
# git checkout -b solution/elevator-mike
```

#### Step 4: Implement Your Solution

1. Navigate to the problem folder:
   ```bash
   cd problems/XX-problem-name/solutions/
   ```

2. Create your solution file:
   ```bash
   # Naming convention: solution_<yourname>.cpp
   touch solution_john.cpp
   ```

3. Write your solution following these guidelines:
   - **Include comments** explaining your design decisions
   - **Follow SOLID principles**
   - **Use appropriate design patterns**
   - **Add class diagrams** (optional but recommended)
   - **Include a header comment** with your approach

Example solution structure:
```cpp
/**
 * Problem: Parking Lot System
 * Author: John Doe
 * Date: 2026-01-30
 * 
 * Approach:
 * - Used Factory Pattern for vehicle creation
 * - Implemented Strategy Pattern for pricing
 * - Applied Singleton for ParkingLot manager
 * 
 * Design Patterns Used:
 * - Factory Pattern
 * - Strategy Pattern
 * - Singleton Pattern
 * 
 * Time Complexity: O(1) for parking, O(n) for finding spot
 * Space Complexity: O(n) where n is number of spots
 */

#include <iostream>
// Your solution code...
```

#### Step 5: Test Your Solution
```bash
# Compile
g++ -std=c++17 solution_john.cpp -o solution

# Run
./solution

# Test with different inputs
```

#### Step 6: Document Your Solution
Create a `SOLUTION.md` in your solution folder (optional):
```markdown
# Solution Approach

## Design Decisions
- Why you chose specific patterns
- Trade-offs you considered

## Class Diagram
[Include diagram if possible]

## How to Run
```bash
g++ -std=c++17 solution_john.cpp -o solution
./solution
```

## Test Cases
- Test case 1: ...
- Test case 2: ...
```

#### Step 7: Commit Your Changes
```bash
# Stage your files
git add problems/XX-problem-name/solutions/solution_john.cpp

# Commit with descriptive message
git commit -m "Add solution for Parking Lot by John Doe

- Implemented Factory and Strategy patterns
- Added detailed comments
- Tested with multiple scenarios"
```

#### Step 8: Push to Your Fork
```bash
git push origin solution/parking-lot-john
```

#### Step 9: Create Pull Request

1. Go to your fork on GitHub
2. Click "Compare & pull request"
3. Fill in the PR template:
   - **Title**: `Solution: [Problem Name] by [Your Name]`
   - **Description**: Explain your approach and design decisions
   - **Checklist**: Complete all items in the template

4. Submit the PR and wait for review

### For Adding New Problems

#### Step 1: Create a Problem Branch
```bash
git checkout -b problem/new-problem-name

# Example:
# git checkout -b problem/movie-ticket-booking
```

#### Step 2: Create Problem Folder Structure
```bash
mkdir -p problems/XX-problem-name/solutions
cd problems/XX-problem-name
```

#### Step 3: Create Problem README
Create `README.md` with:

```markdown
# Problem XX: Problem Name

## Difficulty: [Easy/Medium/Hard]

## Problem Statement

[Clear description of the problem]

## Requirements

### Functional Requirements
1. Requirement 1
2. Requirement 2
...

### Non-Functional Requirements
1. Performance considerations
2. Scalability needs
...

## Expected Classes/Entities

Hint at the main entities:
- Class 1: Purpose
- Class 2: Purpose
...

## Design Patterns to Consider

- Pattern 1
- Pattern 2
...

## Example Usage

```cpp
// Example code showing expected usage
```

## Test Cases

### Test Case 1:
**Input**: ...
**Expected Output**: ...

### Test Case 2:
**Input**: ...
**Expected Output**: ...

## Bonus Challenges (Optional)

- Challenge 1
- Challenge 2

## Evaluation Criteria

Your solution will be evaluated on:
- [ ] Code organization and structure
- [ ] Design pattern usage
- [ ] SOLID principles adherence
- [ ] Code readability and comments
- [ ] Edge case handling
```

#### Step 4: Add Sample Solution (Optional)
```bash
# Create a reference solution
touch sample_solution.cpp
```

#### Step 5: Update Main README
Add your problem to the problem list table in the main `README.md`

#### Step 6: Submit PR
Follow the same PR process as solutions.

## 📏 Code Standards

### C++ Standards
- Use **C++17** or later
- Follow [Google C++ Style Guide](https://google.github.io/styleguide/cppguide.html)
- Use meaningful variable and function names
- Add comments for complex logic

### File Naming
- Solution files: `solution_<yourname>.cpp`
- Problem folders: `XX-problem-name` (use hyphens)
- Use lowercase with hyphens

### Code Format
```cpp
// Use consistent indentation (4 spaces)
class ParkingLot {
private:
    int capacity;
    
public:
    ParkingLot(int cap) : capacity(cap) {}
    
    void parkVehicle() {
        // Implementation
    }
};
```

## ✅ Pull Request Checklist

Before submitting your PR, ensure:

- [ ] Code compiles without errors
- [ ] Code follows C++ standards and style guide
- [ ] Added meaningful comments
- [ ] Tested with multiple scenarios
- [ ] Updated documentation if needed
- [ ] PR title follows format: `Solution: [Problem] by [Name]` or `Problem: [New Problem Name]`
- [ ] PR description explains approach and design decisions
- [ ] No merge conflicts with main branch

## 🔍 Review Process

1. **Automated Checks**: Basic compilation and format checks (if configured)
2. **Peer Review**: Community members review your code
3. **Maintainer Review**: Final review by maintainers
4. **Feedback**: Address any requested changes
5. **Merge**: Once approved, your PR will be merged!

## 💡 Tips for Great Contributions

### For Solutions
- **Think before coding**: Plan your class structure
- **Use design patterns**: Don't just solve it, solve it well
- **Write clean code**: Others will learn from your solution
- **Add comments**: Explain your reasoning
- **Test thoroughly**: Include edge cases

### For Problems
- **Be clear**: Problem statement should be unambiguous
- **Provide examples**: Help others understand requirements
- **Set difficulty appropriately**: Easy/Medium/Hard
- **Include hints**: Suggest patterns without giving away the solution

## 🐛 Reporting Issues

Found a bug or have a suggestion?

1. Check if issue already exists
2. Create a new issue with template
3. Provide details:
   - What you expected
   - What actually happened
   - Steps to reproduce
   - Your environment (OS, compiler, etc.)

## 📞 Getting Help

- **GitHub Discussions**: Ask questions
- **Issues**: Report problems
- **Discord/Slack**: Join community chat (coming soon)

## 🎯 Recognition

Contributors will be recognized in:
- README acknowledgments
- Hall of Fame (coming soon)
- Contributor badges

## 📜 Code of Conduct

- Be respectful and inclusive
- Provide constructive feedback
- Help others learn and grow
- Follow GitHub's community guidelines

---

Thank you for contributing to the LLD Practice Repository! Your contributions help everyone learn and improve. 🚀
