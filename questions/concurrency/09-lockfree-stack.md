# Lock-Free Stack

**Category**: Concurrency | **Difficulty**: Hard

## Problem Statement
Implement a lock-free stack using atomic operations (CAS) for high-performance concurrent access.

## Requirements
### Functional Requirements
1. Push elements without locks
2. Pop elements without locks
3. Handle ABA problem
4. Support concurrent operations
5. Maintain LIFO order

### Non-Functional Requirements
1. Lock-free guarantee
2. High throughput
3. Memory efficient

## Expected Deliverables
**Classes**: LockFreeStack, Node

**Key Operations**: push() - O(1), pop() - O(1)

**Patterns**: Compare-and-Swap, Hazard Pointers

## Test Cases
1. Concurrent push operations
2. Concurrent pop operations
3. Mixed push/pop operations
