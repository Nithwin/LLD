# Skip List Design

**Category**: Data Structures  
**Difficulty**: Hard

## Problem Statement

Design a Skip List data structure that provides O(log n) search, insertion, and deletion operations. The skip list should maintain multiple levels of linked lists for efficient searching.

## Requirements

### Functional Requirements
1. Insert elements in sorted order
2. Search for elements
3. Delete elements
4. Support range queries
5. Maintain probabilistic balancing

### Non-Functional Requirements
1. Average O(log n) for search, insert, delete
2. Space-efficient level management
3. Better cache performance than balanced trees

## Constraints

- Elements must be comparable
- Maximum level is log(n)
- Probability factor for level promotion (typically 0.5)
- Support up to 1 million elements

## Expected Deliverables

### Class Design
- **SkipListNode**: Node with multiple forward pointers
- **SkipList**: Main skip list class

### Key Operations
- `insert(value)`: Add element - O(log n) average
- `search(value)`: Find element - O(log n) average
- `delete(value)`: Remove element - O(log n) average
- `rangeQuery(start, end)`: Find elements in range - O(log n + k)

### Design Patterns
- None specifically

## Example Usage

```
SkipList<Integer> skipList = new SkipList<>();

skipList.insert(3);
skipList.insert(6);
skipList.insert(7);
skipList.insert(9);

boolean found = skipList.search(6);  // true
skipList.delete(6);
found = skipList.search(6);          // false

List<Integer> range = skipList.rangeQuery(3, 9); // [3, 7, 9]
```

## Test Cases

### Test Case 1
**Input**: Insert elements in random order  
**Expected Output**: Maintained in sorted order

### Test Case 2
**Input**: Search for existing and non-existing elements  
**Expected Output**: Correct results

### Test Case 3
**Input**: Delete elements and verify structure  
**Expected Output**: Skip list remains valid

## Evaluation Criteria

- Correct skip list implementation
- Proper level generation
- O(log n) average performance
- Range query efficiency
- Memory management

## Additional Notes

Consider the trade-off between levels and performance. Think about deterministic vs probabilistic level assignment.
