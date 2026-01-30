# Thread-Safe Singleton

**Category**: Concurrency | **Difficulty**: Medium

## Problem Statement
Implement various thread-safe singleton patterns with different initialization strategies and performance characteristics.

## Requirements
### Functional Requirements
1. Ensure single instance
2. Thread-safe initialization
3. Lazy initialization option
4. Eager initialization option
5. Double-checked locking variant

### Non-Functional Requirements
1. Minimal synchronization overhead
2. Memory efficient
3. Prevent reflection attacks

## Expected Deliverables
**Classes**: Singleton (multiple variants)

**Key Operations**: getInstance() - O(1)

**Patterns**: Singleton, Double-Checked Locking, Initialization-on-demand

## Test Cases
1. Concurrent getInstance() calls
2. Single instance verification
3. Performance comparison of variants
