# Reader-Writer Lock

**Category**: Concurrency | **Difficulty**: Hard

## Problem Statement
Design a reader-writer lock allowing multiple concurrent readers or a single writer, with fairness guarantees.

## Requirements
### Functional Requirements
1. Multiple readers can access simultaneously
2. Exclusive writer access
3. Prevent writer starvation
4. Support read/write lock upgrades
5. Timeout-based lock acquisition

### Non-Functional Requirements
1. Fair scheduling
2. Deadlock prevention
3. High read throughput

## Expected Deliverables
**Classes**: ReadWriteLock, ReadLock, WriteLock

**Key Operations**: acquireReadLock() - O(1), acquireWriteLock() - O(1), release() - O(1)

**Patterns**: Monitor, Strategy

## Test Cases
1. Multiple concurrent readers
2. Exclusive writer access
3. Writer waiting for readers
