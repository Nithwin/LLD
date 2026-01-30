# Concurrent HashMap

**Category**: Concurrency | **Difficulty**: Hard

## Problem Statement
Design a thread-safe HashMap supporting concurrent reads and writes with fine-grained locking for high performance.

## Requirements
### Functional Requirements
1. Thread-safe put, get, remove operations
2. Support concurrent reads
3. Minimize lock contention
4. Atomic operations (putIfAbsent, replace)
5. Iteration support

### Non-Functional Requirements
1. High concurrency
2. Lock-free reads (optional)
3. Scalable performance

## Expected Deliverables
**Classes**: ConcurrentHashMap, Segment, Entry

**Key Operations**: put() - O(1), get() - O(1), remove() - O(1)

**Patterns**: Lock Striping, Compare-and-Swap

## Test Cases
1. Concurrent puts and gets
2. Resize during concurrent access
3. Atomic operations correctness
