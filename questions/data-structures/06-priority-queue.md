# Priority Queue with Custom Comparator

**Category**: Data Structures  
**Difficulty**: Medium

## Problem Statement

Design a priority queue (heap-based) that supports custom comparison logic. The queue should efficiently maintain elements in priority order and support standard priority queue operations.

## Requirements

### Functional Requirements
1. Insert elements with priorities
2. Extract element with highest priority
3. Peek at highest priority element
4. Support custom comparators for different priority schemes
5. Update priority of existing elements
6. Remove arbitrary elements

### Non-Functional Requirements
1. Efficient insertion and extraction (O(log n))
2. Support both min-heap and max-heap behavior
3. Generic type support

## Constraints

- Heap property must be maintained after each operation
- Support up to 100,000 elements
- Custom comparator must be provided at construction
- Priority updates should be efficient

## Expected Deliverables

### Class Design
- **PriorityQueue**: Main queue class
- **Comparator**: Interface for custom comparison
- Internal heap implementation

### Key Operations
- `insert(element, priority)`: Add element - O(log n)
- `extractMax/Min()`: Remove highest priority - O(log n)
- `peek()`: View highest priority - O(1)
- `updatePriority(element, newPriority)`: Change priority - O(log n)
- `remove(element)`: Remove specific element - O(n)
- `size()`: Get queue size - O(1)

### Design Patterns
- Strategy Pattern (for comparators)

## Example Usage

```
// Max heap with custom comparator
Comparator<Task> taskComparator = (t1, t2) -> t1.getPriority() - t2.getPriority();
PriorityQueue<Task> queue = new PriorityQueue<>(taskComparator);

queue.insert(new Task("Low priority", 1));
queue.insert(new Task("High priority", 10));
queue.insert(new Task("Medium priority", 5));

Task highest = queue.extractMax(); // Returns "High priority"
```

## Test Cases

### Test Case 1
**Input**: Insert elements with different priorities, extract max  
**Expected Output**: Elements extracted in priority order

### Test Case 2
**Input**: Update priority of middle element  
**Expected Output**: Heap property maintained

### Test Case 3
**Input**: Use custom comparator for complex objects  
**Expected Output**: Correct ordering based on comparator

## Evaluation Criteria

- Correct heap implementation
- O(log n) insertion and extraction
- Proper comparator usage
- Heap property maintenance
- Efficient priority updates


## Sample Tests

### Sample Test 1: Priority Extraction
```java
// Input
PriorityQueue<Task> pq = new PriorityQueue<>((a,b) -> b.priority - a.priority);
pq.insert(new Task("Low", 1));
pq.insert(new Task("High", 10));
pq.insert(new Task("Med", 5));
System.out.println(pq.extractMax().name);

// Output
High
```

### Sample Test 2: Priority Update
```java
// Input
Task task = new Task("Update", 3);
pq.insert(task);
pq.updatePriority(task, 15);
System.out.println(pq.peek().name);

// Output
Update
```

## Additional Notes

Consider using a binary heap or Fibonacci heap. Think about how to efficiently locate elements for priority updates.
