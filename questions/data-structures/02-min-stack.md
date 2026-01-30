# Min Stack Design

**Category**: Data Structures  
**Difficulty**: Easy

## Problem Statement

Design a stack that supports push, pop, top, and retrieving the minimum element in constant time. All operations must be O(1).

## Requirements

### Functional Requirements
1. Push element onto stack
2. Pop element from stack
3. Get top element without removing it
4. Get minimum element in stack
5. Support generic data types

### Non-Functional Requirements
1. All operations in O(1) time
2. Space efficient implementation
3. Handle empty stack gracefully

## Constraints

- All operations must be O(1)
- Stack can be empty
- Elements can be duplicates
- Support negative numbers

## Expected Deliverables

### Class Design
- **MinStack**: Stack with min tracking

### Key Operations
- `push(value)`: Add element - O(1)
- `pop()`: Remove top element - O(1)
- `top()`: Get top element - O(1)
- `getMin()`: Get minimum element - O(1)
- `isEmpty()`: Check if empty - O(1)

### Design Patterns
- None specifically

## Example Usage

```
MinStack stack = new MinStack();
stack.push(5);
stack.push(3);
stack.push(7);
stack.push(1);

stack.getMin();  // Returns 1
stack.pop();     // Removes 1
stack.getMin();  // Returns 3
stack.top();     // Returns 7
```

## Test Cases

### Test Case 1
**Input**: Push [5,3,7,1], call getMin  
**Expected Output**: 1

### Test Case 2
**Input**: Push [5,3,7,1], pop twice, call getMin  
**Expected Output**: 3

### Test Case 3
**Input**: Push duplicate minimums [2,2,3], pop once, call getMin  
**Expected Output**: 2

## Evaluation Criteria

- O(1) time for all operations
- Correct minimum tracking
- Proper handling of duplicates
- Edge case handling (empty stack)
- Space complexity consideration

## Sample Tests

### Sample Test 1: Min Tracking
```java
// Input
MinStack stack = new MinStack();
stack.push(5);
stack.push(3);
stack.push(7);
stack.push(1);
System.out.println("Min: " + stack.getMin());
stack.pop();
System.out.println("Min after pop: " + stack.getMin());

// Output
Min: 1
Min after pop: 3
Top: 7
```

### Sample Test 2: Duplicate Minimums
```java
// Input
MinStack stack = new MinStack();
stack.push(2);
stack.push(2);
stack.push(3);
stack.pop();
System.out.println("Min: " + stack.getMin());
stack.pop();
System.out.println("Min: " + stack.getMin());

// Output
Min: 2
Min: 2  // Still 2 after popping one duplicate
```

## Additional Notes

Consider using an auxiliary stack or storing min with each element. Think about trade-offs between time and space complexity.
