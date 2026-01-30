# Semaphore Implementation

**Category**: Concurrency | **Difficulty**: Medium

## Problem Statement
Implement a counting semaphore for controlling access to a resource pool with configurable permits.

## Requirements
### Functional Requirements
1. Acquire permits (blocking and non-blocking)
2. Release permits
3. Support multiple permits per operation
4. Fair permit distribution
5. Timeout-based acquisition

### Non-Functional Requirements
1. Thread-safe operations
2. No busy waiting
3. Prevent permit leaks

## Expected Deliverables
**Classes**: Semaphore

**Key Operations**: acquire() - O(1), release() - O(1), tryAcquire(timeout) - O(1)

**Patterns**: Monitor

## Test Cases
1. Multiple threads acquiring permits
2. Blocking when no permits available
3. Fair permit distribution
