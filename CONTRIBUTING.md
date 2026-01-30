# Contributing to LLD System Design Questions

Thank you for your interest in contributing to this repository. This document provides guidelines for contributing solutions, questions, and improvements.

## Table of Contents

- [Getting Started](#getting-started)
- [Contribution Types](#contribution-types)
- [Branch Naming Convention](#branch-naming-convention)
- [Solution Submission Process](#solution-submission-process)
- [Code Standards](#code-standards)
- [Commit Message Guidelines](#commit-message-guidelines)
- [Pull Request Process](#pull-request-process)
- [Code Review](#code-review)

## Getting Started

1. Fork the repository to your GitHub account
2. Clone your fork locally:
   ```bash
   git clone https://github.com/YOUR_USERNAME/LLD.git
   cd LLD
   ```
3. Add the upstream repository:
   ```bash
   git remote add upstream https://github.com/ORIGINAL_OWNER/LLD.git
   ```
4. Keep your fork synchronized:
   ```bash
   git fetch upstream
   git merge upstream/main
   ```

## Contribution Types

### 1. Solution Submission
Submit your implementation for any question in Java or C++.

### 2. New Question Proposal
Propose new LLD questions with clear requirements and constraints.

### 3. Documentation Improvement
Enhance existing documentation, fix typos, or improve clarity.

### 4. Bug Fixes
Report and fix issues in existing solutions or documentation.

## Branch Naming Convention

Use descriptive branch names following these patterns:

### For Solutions
```
solution/<question-name>-<your-id>
```
Examples:
- `solution/singleton-logger-john123`
- `solution/lru-cache-alice456`

### For New Questions
```
question/<question-name>
```
Example:
- `question/message-queue-system`

### For Bug Fixes
```
fix/<issue-description>
```
Example:
- `fix/parking-lot-null-pointer`

### For Documentation
```
docs/<description>
```
Example:
- `docs/update-contributing-guide`

## Solution Submission Process

### Step 1: Choose a Question
Browse the `questions/` directory and select a question you want to solve.

### Step 2: Create Your Branch
```bash
git checkout -b solution/<question-name>-<your-id>
```

### Step 3: Implement Your Solution

#### For Java Solutions
Create your solution file in:
```
solutions/java/<category>/<question-name>/<your-id>/
```

File structure:
```
<your-id>/
├── Solution.java           # Main solution file
├── README.md              # Your approach explanation
└── (additional classes)   # If needed
```

#### For C++ Solutions
Create your solution file in:
```
solutions/cpp/<category>/<question-name>/<your-id>/
```

File structure:
```
<your-id>/
├── solution.cpp           # Main solution file
├── solution.h             # Header file (if needed)
├── README.md             # Your approach explanation
└── Makefile              # Build instructions (optional)
```

### Step 4: Document Your Solution
Create a README.md in your solution directory with:

```markdown
# Solution by [Your ID]

## Approach
Brief description of your design approach and key decisions.

## Design Patterns Used
List any design patterns you implemented.

## Time Complexity
Analysis of time complexity for key operations.

## Space Complexity
Analysis of space complexity.

## Trade-offs
Discuss any trade-offs you made in your design.

## How to Run

### Java
[Compilation and execution instructions]

### C++
[Compilation and execution instructions]
```

### Step 5: Test Your Solution
Ensure your code:
- Compiles without errors
- Runs successfully
- Handles edge cases
- Follows the question requirements

### Step 6: Commit Your Changes
```bash
git add .
git commit -m "Add solution for <question-name> by <your-id>"
```

### Step 7: Push to Your Fork
```bash
git push origin solution/<question-name>-<your-id>
```

### Step 8: Create Pull Request
1. Go to your fork on GitHub
2. Click "New Pull Request"
3. Select your branch
4. Fill in the PR template with required information
5. Submit the pull request

## Code Standards

### Java Standards

1. **Naming Conventions**
   - Classes: PascalCase (e.g., `UserManager`)
   - Methods: camelCase (e.g., `getUserById`)
   - Constants: UPPER_SNAKE_CASE (e.g., `MAX_SIZE`)

2. **Code Style**
   - Use 4 spaces for indentation
   - Maximum line length: 120 characters
   - Always use braces for control structures

3. **Documentation**
   - Add Javadoc comments for public classes and methods
   - Include inline comments for complex logic

4. **Best Practices**
   - Follow SOLID principles
   - Use appropriate design patterns
   - Handle exceptions properly
   - Avoid code duplication

### C++ Standards

1. **Naming Conventions**
   - Classes: PascalCase (e.g., `UserManager`)
   - Functions: camelCase (e.g., `getUserById`)
   - Constants: UPPER_SNAKE_CASE (e.g., `MAX_SIZE`)
   - Private members: prefix with underscore (e.g., `_data`)

2. **Code Style**
   - Use 4 spaces for indentation
   - Maximum line length: 120 characters
   - Use header guards or `#pragma once`

3. **Memory Management**
   - Use smart pointers (unique_ptr, shared_ptr)
   - Follow RAII principles
   - Avoid raw pointers when possible

4. **Documentation**
   - Add Doxygen-style comments for public interfaces
   - Include inline comments for complex logic

5. **Best Practices**
   - Use C++11 or later features
   - Prefer const correctness
   - Use references over pointers when appropriate
   - Implement rule of three/five when needed

## Commit Message Guidelines

Write clear, concise commit messages:

### Format
```
<type>: <subject>

<body (optional)>
```

### Types
- `feat`: New feature or solution
- `fix`: Bug fix
- `docs`: Documentation changes
- `refactor`: Code refactoring
- `test`: Adding or updating tests
- `style`: Code style changes (formatting)

### Examples
```
feat: Add singleton logger solution by john123

Implemented thread-safe singleton pattern with lazy initialization.
Used double-checked locking for performance optimization.
```

```
fix: Correct null pointer issue in parking lot solution

Added null checks before accessing vehicle objects.
```

## Pull Request Process

### PR Title Format
```
[Category] Question Name - Your ID
```
Example:
```
[Design Patterns] Singleton Logger - john123
```

### PR Description Template
```markdown
## Solution Details
- **Question**: [Question Name]
- **Category**: [Category Name]
- **Language**: [Java/C++/Both]
- **Contributor ID**: [Your ID]

## Implementation Summary
Brief description of your implementation approach.

## Design Patterns Used
List the design patterns you implemented.

## Testing
Describe how you tested your solution.

## Checklist
- [ ] Code compiles without errors
- [ ] Code follows style guidelines
- [ ] Documentation is complete
- [ ] Solution meets all requirements
- [ ] README.md is included
```

## Code Review

### Review Process
1. Maintainers will review your PR within 3-5 business days
2. Address any requested changes
3. Once approved, your PR will be merged

### Review Criteria
- Code correctness and completeness
- Adherence to coding standards
- Quality of documentation
- Design pattern implementation
- Code efficiency and readability

### Responding to Feedback
- Be open to constructive criticism
- Make requested changes promptly
- Ask questions if feedback is unclear
- Update your PR with improvements

## Questions and Support

If you have questions:
1. Check existing issues and discussions
2. Create a new issue with the `question` label
3. Provide clear context and examples

## Code of Conduct

- Be respectful and professional
- Provide constructive feedback
- Help others learn and grow
- Celebrate diverse approaches to problem-solving

Thank you for contributing to this learning community!
