# Low Level Design (LLD) Practice Repository 🎯

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![PRs Welcome](https://img.shields.io/badge/PRs-welcome-brightgreen.svg)](CONTRIBUTING.md)

Welcome to the **Low Level Design Practice Repository**! This is an open-source collection of LLD problems designed to help developers master object-oriented design principles, design patterns, and system modeling.

## 📚 Table of Contents

- [About](#about)
- [Problem List](#problem-list)
- [Getting Started](#getting-started)
- [How to Contribute](#how-to-contribute)
- [Workflow](#workflow)
- [Code Structure](#code-structure)
- [Learning Resources](#learning-resources)
- [Community](#community)

## 🎯 About

This repository contains a curated list of Low Level Design problems that focus on:
- **Object-Oriented Programming (OOP)** principles
- **Design Patterns** (Creational, Structural, Behavioral)
- **SOLID principles**
- **System Modeling** and class diagram design
- **Real-world problem solving**

Each problem is designed to simulate real-world scenarios and help you think like a software architect.

## 📋 Problem List

| # | Problem | Difficulty | Concepts | Status |
|---|---------|------------|----------|--------|
| 1 | [Toll Gate System](./problems/01-toll-gate-system/) | Medium | Inheritance, Polymorphism | ✅ Sample Available |
| 2 | [Parking Lot System](./problems/02-parking-lot/) | Medium | Factory Pattern, Strategy | 📝 Open |
| 3 | [Library Management System](./problems/03-library-management/) | Easy | OOP Basics, Encapsulation | 📝 Open |
| 4 | [Hotel Booking System](./problems/04-hotel-booking/) | Medium | Observer Pattern, State | 📝 Open |
| 5 | [Elevator System](./problems/05-elevator-system/) | Hard | State Machine, Queue | 📝 Open |
| 6 | [ATM Machine](./problems/06-atm-machine/) | Medium | State Pattern, Chain of Responsibility | 📝 Open |
| 7 | [Vending Machine](./problems/07-vending-machine/) | Medium | State Pattern | 📝 Open |
| 8 | [Chess Game](./problems/08-chess-game/) | Hard | Strategy, Command Pattern | 📝 Open |
| 9 | [Online Shopping System](./problems/09-online-shopping/) | Hard | Multiple Patterns | 📝 Open |
| 10 | [Ride Sharing System](./problems/10-ride-sharing/) | Hard | Strategy, Observer | 📝 Open |

## 🚀 Getting Started

### Prerequisites

- C++ compiler (GCC 7+ or Clang 6+)
- Git
- Code editor (VS Code, CLion, etc.)

### Setup

1. **Fork this repository**
   ```bash
   # Click the "Fork" button at the top of this repository
   ```

2. **Clone your fork**
   ```bash
   git clone https://github.com/YOUR_USERNAME/LLD.git
   cd LLD
   ```

3. **Add upstream remote**
   ```bash
   git remote add upstream https://github.com/ORIGINAL_OWNER/LLD.git
   ```

4. **Choose a problem**
   - Browse the [problem list](#problem-list)
   - Select a problem you want to solve
   - Check the problem's README for requirements

## 🤝 How to Contribute

We welcome contributions! Here's how you can contribute:

1. **Solve a Problem** - Pick an open problem and implement your solution
2. **Add a New Problem** - Propose and add new LLD problems
3. **Improve Documentation** - Enhance problem statements or guides
4. **Review Solutions** - Help review others' pull requests

For detailed guidelines, see [CONTRIBUTING.md](CONTRIBUTING.md)

## 🔄 Workflow

### For Problem Solvers

1. **Create a branch for your solution**
   ```bash
   git checkout -b solution/problem-name-yourname
   # Example: git checkout -b solution/parking-lot-john
   ```

2. **Implement your solution**
   - Navigate to the problem folder: `problems/XX-problem-name/`
   - Create your solution file: `solution_yourname.cpp`
   - Follow the problem requirements
   - Add comments explaining your design decisions

3. **Test your solution**
   ```bash
   g++ -std=c++17 solution_yourname.cpp -o solution
   ./solution
   ```

4. **Commit and push**
   ```bash
   git add .
   git commit -m "Add solution for [Problem Name] by [Your Name]"
   git push origin solution/problem-name-yourname
   ```

5. **Create a Pull Request**
   - Go to your fork on GitHub
   - Click "New Pull Request"
   - Fill in the PR template
   - Wait for review

### For Problem Creators

1. **Create a branch**
   ```bash
   git checkout -b problem/new-problem-name
   ```

2. **Add problem folder**
   - Create folder: `problems/XX-problem-name/`
   - Add `README.md` with problem statement
   - Add `sample_solution.cpp` (optional)
   - Add test cases if applicable

3. **Submit PR** following the same process above

## 📁 Code Structure

```
LLD/
├── problems/
│   ├── 01-toll-gate-system/
│   │   ├── README.md              # Problem statement
│   │   ├── sample_solution.cpp    # Reference solution
│   │   └── solutions/             # Community solutions
│   │       ├── solution_user1.cpp
│   │       └── solution_user2.cpp
│   ├── 02-parking-lot/
│   │   └── README.md
│   └── ...
├── .github/
│   ├── ISSUE_TEMPLATE/
│   └── PULL_REQUEST_TEMPLATE.md
├── CONTRIBUTING.md
├── LICENSE
└── README.md
```

## 📖 Learning Resources

### Design Patterns
- [Refactoring Guru - Design Patterns](https://refactoring.guru/design-patterns)
- [Head First Design Patterns](https://www.oreilly.com/library/view/head-first-design/0596007124/)

### SOLID Principles
- [SOLID Principles Explained](https://www.digitalocean.com/community/conceptual_articles/s-o-l-i-d-the-first-five-principles-of-object-oriented-design)

### System Design
- [System Design Primer](https://github.com/donnemartin/system-design-primer)

## 🌟 Community

- **Discussions**: Use GitHub Discussions to ask questions
- **Issues**: Report bugs or suggest new problems via Issues
- **Discord/Slack**: [Join our community](#) (coming soon)

## 📜 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## 🙏 Acknowledgments

- Thanks to all contributors who help make this repository better!
- Problem ideas inspired by real-world systems and common interview questions

---

**Happy Coding! 🚀** If you find this repository helpful, please ⭐ star it to show your support!