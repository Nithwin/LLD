# Library Management System

**Category**: System Components | **Difficulty**: Medium

## Problem Statement
Design a library management system for managing books, members, borrowing, and returns with fine calculation.

## Requirements
### Functional Requirements
1. Add/remove books and members
2. Issue and return books
3. Search books by title, author, ISBN
4. Calculate late return fines
5. Reserve books that are currently issued

### Non-Functional Requirements
1. Support multiple copies of same book
2. Track borrowing history
3. Handle concurrent book checkouts

## Expected Deliverables
**Classes**: Library, Book, Member, Transaction, Catalog, FineCalculator

**Key Operations**: issueBook() - O(1), returnBook() - O(1), searchBooks() - O(log n), calculateFine() - O(1)

**Patterns**: Singleton, Observer, Strategy

## Test Cases
1. Issue book to member
2. Calculate fine for late return
3. Reserve already issued book
