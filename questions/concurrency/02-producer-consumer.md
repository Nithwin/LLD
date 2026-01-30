# Producer-Consumer Problem

**Category**: Concurrency | **Difficulty**: Medium

## Problem Statement
Implement the classic producer-consumer problem with bounded buffer using proper synchronization mechanisms.

## Requirements
### Functional Requirements
1. Producers add items to buffer
2. Consumers remove items from buffer
3. Block when buffer is full/empty
4. Support multiple producers and consumers
5. Maintain FIFO order

### Non-Functional Requirements
1. Thread-safe operations
2. No busy waiting
3. Fair scheduling

## Expected Deliverables
**Classes**: Buffer, Producer, Consumer

**Key Operations**: produce() - O(1), consume() - O(1)

**Patterns**: Monitor, Condition Variables

## Test Cases
1. Multiple producers and consumers
2. Buffer full scenario
3. Buffer empty scenario
