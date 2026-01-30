# Circular Buffer Implementation

**Category**: Data Structures  
**Difficulty**: Easy

## Problem Statement

Design a circular buffer (ring buffer) with fixed capacity that efficiently handles continuous data streams. The buffer should overwrite oldest data when full.

## Requirements

### Functional Requirements
1. Write data to buffer
2. Read data from buffer
3. Check if buffer is full or empty
4. Get current buffer size
5. Clear buffer contents

### Non-Functional Requirements
1. Fixed memory allocation
2. O(1) read and write operations
3. Thread-safe variant (optional)

## Constraints

- Buffer capacity is fixed at initialization
- Oldest data is overwritten when buffer is full
- Support generic data types
- Efficient memory usage

## Expected Deliverables

### Class Design
- **CircularBuffer**: Main buffer class with read/write pointers

### Key Operations
- `write(item)`: Add item to buffer - O(1)
- `read()`: Remove and return oldest item - O(1)
- `peek()`: View oldest item without removing - O(1)
- `isFull()`: Check if buffer is full - O(1)
- `isEmpty()`: Check if buffer is empty - O(1)
- `size()`: Get current size - O(1)
- `clear()`: Reset buffer - O(1)

### Design Patterns
- None specifically

## Example Usage

```
CircularBuffer<Integer> buffer = new CircularBuffer<>(3);

buffer.write(1);
buffer.write(2);
buffer.write(3);
buffer.write(4); // Overwrites 1

buffer.read(); // Returns 2
buffer.read(); // Returns 3
buffer.read(); // Returns 4
```

## Test Cases

### Test Case 1
**Input**: Fill buffer to capacity, write one more  
**Expected Output**: Oldest element overwritten

### Test Case 2
**Input**: Read from empty buffer  
**Expected Output**: Exception or null

### Test Case 3
**Input**: Alternating read/write operations  
**Expected Output**: Correct FIFO behavior

## Evaluation Criteria

- Correct circular buffer logic
- Proper pointer management
- O(1) operations
- Edge case handling
- Memory efficiency


## Sample Tests

### Sample Test 1: Overwrite Behavior
```java
// Input
CircularBuffer<Integer> buf = new CircularBuffer<>(3);
buf.write(1); buf.write(2); buf.write(3);
buf.write(4);  // Overwrites 1
System.out.println(buf.read());

// Output
2
```

### Sample Test 2: Full/Empty States
```java
// Input
CircularBuffer<String> buf = new CircularBuffer<>(2);
System.out.println(buf.isEmpty());
buf.write("A"); buf.write("B");
System.out.println(buf.isFull());

// Output
true
true
```

## Additional Notes

Consider using modulo arithmetic for pointer wrapping. Think about blocking vs non-blocking variants.
