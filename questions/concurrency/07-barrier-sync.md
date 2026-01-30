# Barrier Synchronization

**Category**: Concurrency | **Difficulty**: Medium

## Problem Statement
Implement a cyclic barrier that allows a set of threads to wait for each other to reach a common barrier point.

## Requirements
### Functional Requirements
1. Wait for all threads to reach barrier
2. Execute barrier action when all arrive
3. Reset barrier for reuse
4. Support timeout
5. Handle thread interruption

### Non-Functional Requirements
1. Thread-safe operations
2. Efficient waiting mechanism
3. Reusable barrier

## Expected Deliverables
**Classes**: CyclicBarrier, BarrierAction

**Key Operations**: await() - O(1), reset() - O(1)

**Patterns**: Monitor, Command

## Test Cases
1. All threads wait at barrier
2. Barrier action execution
3. Barrier reset and reuse
