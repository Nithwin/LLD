# Disjoint Set Union (DSU)

**Category**: Data Structures  
**Difficulty**: Medium

## Problem Statement

Design a Disjoint Set Union (Union-Find) data structure that efficiently manages a partition of elements into disjoint sets. Implement path compression and union by rank optimizations.

## Requirements

### Functional Requirements
1. Create singleton sets for elements
2. Find the representative (root) of a set
3. Union two sets together
4. Check if two elements are in the same set
5. Count number of disjoint sets

### Non-Functional Requirements
1. Near constant time operations with optimizations
2. Space-efficient representation
3. Support large number of elements

## Constraints

- Elements are integers from 0 to n-1
- Union operations should maintain balance
- Find operations should use path compression
- Support up to 1 million elements

## Expected Deliverables

### Class Design
- **DisjointSet**: Main DSU class with parent and rank arrays

### Key Operations
- `makeSet(element)`: Create singleton set - O(1)
- `find(element)`: Find set representative - O(α(n)) amortized
- `union(x, y)`: Merge two sets - O(α(n)) amortized
- `connected(x, y)`: Check if in same set - O(α(n))
- `countSets()`: Get number of disjoint sets - O(1)

### Design Patterns
- None specifically

## Example Usage

```
DisjointSet ds = new DisjointSet(10);

ds.union(1, 2);
ds.union(2, 3);
ds.union(4, 5);

ds.connected(1, 3);  // true (same set)
ds.connected(1, 4);  // false (different sets)

ds.union(3, 4);
ds.connected(1, 5);  // true (now in same set)
```

## Test Cases

### Test Case 1
**Input**: Union multiple elements, check connectivity  
**Expected Output**: Correct set membership

### Test Case 2
**Input**: Perform many find operations  
**Expected Output**: Path compression reduces tree height

### Test Case 3
**Input**: Union by rank maintains balance  
**Expected Output**: Tree depth remains logarithmic

## Evaluation Criteria

- Correct DSU implementation
- Path compression optimization
- Union by rank optimization
- Near constant time operations
- Proper handling of edge cases

## Additional Notes

Consider applications in Kruskal's algorithm and dynamic connectivity. Think about weighted union-find variants.
