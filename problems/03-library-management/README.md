# Problem 03: Library Management System

## Difficulty: Easy

## Problem Statement

Design a **Library Management System** that manages books, members, and lending operations. The system should track book inventory, member accounts, and borrowing/returning transactions.

## Requirements

### Functional Requirements

1. **Book Management**
   - Add new books to library
   - Search books by title, author, or ISBN
   - Track total copies and available copies

2. **Member Management**
   - Register new members
   - View member details
   - Track borrowed books per member

3. **Lending Operations**
   - Issue book to member (if available)
   - Return book from member
   - Calculate late fees (₹10 per day after 14 days)

4. **Inventory Tracking**
   - List all books
   - Check book availability
   - Maximum 3 books per member at a time

### Non-Functional Requirements

1. Simple and intuitive design
2. Easy to extend for new book types
3. Data persistence (bonus)

## Expected Classes/Entities

- **Book**: Represents a book with ISBN, title, author
- **Member**: Library member with ID and name
- **Library**: Main system manager
- **Transaction**: Records book lending/returning
- **LibraryCard**: Represents member's library card

## Design Patterns to Consider

- **Singleton Pattern**: For Library instance
- **Factory Pattern**: For creating different book types (optional)
- **Observer Pattern**: For notifications (bonus)

## Example Usage

```cpp
Library library;

// Add books
library.addBook("1234", "Clean Code", "Robert Martin", 5);
library.addBook("5678", "Design Patterns", "Gang of Four", 3);

// Register member
library.registerMember("M001", "John Doe");

// Borrow book
library.borrowBook("M001", "1234");
// Output: Book 'Clean Code' issued to John Doe

// Return book after 16 days
library.returnBook("M001", "1234", 16);
// Output: Book returned. Late fee: ₹20 (2 days * ₹10)

// Check availability
int available = library.getAvailableBooks("1234");
// Output: Available copies: 4
```

## Test Cases

### Test Case 1: Basic Operations
**Input**: 
- Add 3 books
- Register 2 members
- Member borrows 1 book

**Expected**: 
- Book count decreases
- Member's borrowed list updated

### Test Case 2: Maximum Limit
**Input**: 
- Member tries to borrow 4th book

**Expected**: 
- Operation rejected: "Maximum 3 books allowed"

### Test Case 3: Unavailable Book
**Input**: 
- All copies of a book are borrowed
- Another member tries to borrow it

**Expected**: 
- Operation rejected: "Book not available"

### Test Case 4: Late Fee
**Input**: 
- Borrow book for 20 days (6 days late)

**Expected**: 
- Late fee: ₹60

## Design Considerations

1. How to track multiple copies of the same book?
2. How to enforce the 3-book limit per member?
3. How to calculate late fees accurately?
4. How to handle concurrent borrowing requests?

## Bonus Challenges

- [ ] Book reservation system
- [ ] Different membership tiers (student, adult, senior)
- [ ] Email notifications for due dates
- [ ] Book recommendations based on history
- [ ] Multiple library branches

## Evaluation Criteria

- [ ] Clear class structure
- [ ] Proper encapsulation
- [ ] Input validation
- [ ] Edge case handling
- [ ] Code readability

---

**Good Luck!** 📚
