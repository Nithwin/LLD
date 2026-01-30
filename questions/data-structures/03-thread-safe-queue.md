# Thread-Safe Queue

**Category**: Data Structures  
**Difficulty**: Medium

## Problem Statement

Design a thread-safe queue that supports concurrent enqueue and dequeue operations. The queue should handle multiple producer and consumer threads safely without data corruption.

## Requirements

### Functional Requirements
1. Enqueue elements from multiple threads
2. Dequeue elements from multiple threads
3. Support blocking and non-blocking operations
4. Peek at front element without removing
5. Get current queue size

### Non-Functional Requirements
1. Thread-safe for concurrent access
2. Minimize lock contention
3. Prevent deadlocks
4. Fair scheduling for waiting threads

## Constraints

- Queue can have fixed or dynamic capacity
- Must handle concurrent access correctly
- Blocking dequeue should wait when queue is empty
- Blocking enqueue should wait when queue is full (if bounded)

## Expected Deliverables

### Class Design
- **ThreadSafeQueue**: Main queue class with synchronization

### Key Operations
- `enqueue(item)`: Add item (blocking if full) - O(1)
- `dequeue()`: Remove and return item (blocking if empty) - O(1)
- `tryEnqueue(item, timeout)`: Non-blocking enqueue - O(1)
- `tryDequeue(timeout)`: Non-blocking dequeue - O(1)
- `size()`: Get queue size - O(1)

### Design Patterns
- Monitor Pattern
- Producer-Consumer Pattern

## Example Usage

```
ThreadSafeQueue<Integer> queue = new ThreadSafeQueue<>(10);

// Producer thread
new Thread(() -> {
    queue.enqueue(42);
}).start();

// Consumer thread
new Thread(() -> {
    Integer value = queue.dequeue();
}).start();
```

## Test Cases

### Test Case 1
**Input**: Multiple threads enqueuing simultaneously  
**Expected Output**: All items added without loss

### Test Case 2
**Input**: Dequeue from empty queue with timeout  
**Expected Output**: Blocks until item available or timeout

### Test Case 3
**Input**: Concurrent enqueue and dequeue operations  
**Expected Output**: No data corruption, correct ordering

## Evaluation Criteria

- Correct synchronization mechanism
- No race conditions
- Deadlock prevention
- Performance under concurrent load
- Proper use of locks/semaphores

## Additional Notes

Consider using mutex/locks, condition variables, or semaphores. Think about bounded vs unbounded queue implementations.
