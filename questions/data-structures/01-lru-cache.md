# LRU Cache Implementation

**Category**: Data Structures  
**Difficulty**: Medium

## Problem Statement

Design and implement a Least Recently Used (LRU) cache that supports get and put operations in O(1) time complexity. The cache should evict the least recently used item when capacity is reached.

## Requirements

### Functional Requirements
1. Get value by key in O(1) time
2. Put key-value pair in O(1) time
3. Evict least recently used item when capacity is full
4. Update access order on get operations
5. Support generic key-value types

### Non-Functional Requirements
1. Thread-safe implementation (optional advanced version)
2. Memory efficient
3. Constant time operations

## Constraints

- Cache capacity is fixed at initialization
- Capacity must be positive
- Keys are unique
- Both get and put must be O(1)

## Expected Deliverables

### Class Design
- **LRUCache**: Main cache class
- Internal data structures: HashMap + Doubly Linked List

### Key Operations
- `get(key)`: Retrieve value and update access order - O(1)
- `put(key, value)`: Insert/update and evict if needed - O(1)
- `size()`: Get current cache size - O(1)
- `clear()`: Remove all entries - O(n)

### Design Patterns
- None specifically, focus on data structure implementation

## Example Usage

```
LRUCache cache = new LRUCache(3);

cache.put(1, "A");
cache.put(2, "B");
cache.put(3, "C");
cache.get(1);        // Returns "A", moves 1 to front
cache.put(4, "D");   // Evicts key 2 (least recently used)
cache.get(2);        // Returns null (evicted)
```

## Test Cases

### Test Case 1
**Input**: Put 3 items in cache with capacity 3, then put 4th item  
**Expected Output**: First item evicted

### Test Case 2
**Input**: Get operation on existing key  
**Expected Output**: Value returned and key moved to front

### Test Case 3
**Input**: Put operation with existing key  
**Expected Output**: Value updated, key moved to front

## Evaluation Criteria

- O(1) time complexity for both operations
- Correct LRU eviction policy
- Proper data structure usage
- Memory efficiency
- Edge case handling

## Additional Notes

Consider using a combination of HashMap and Doubly Linked List. Think about how to maintain both fast lookup and ordered access.
