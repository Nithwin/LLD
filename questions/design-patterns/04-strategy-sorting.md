# Strategy Pattern for Sorting Algorithms

**Category**: Design Patterns  
**Difficulty**: Easy

## Problem Statement

Design a flexible sorting system that can sort data using different algorithms (Bubble Sort, Quick Sort, Merge Sort, Heap Sort) based on runtime requirements. The sorting strategy should be interchangeable without modifying client code.

## Requirements

### Functional Requirements
1. Support multiple sorting algorithms
2. Allow runtime selection of sorting strategy
3. Sort different data types (integers, strings, custom objects)
4. Provide performance metrics for each sort operation
5. Support custom comparators

### Non-Functional Requirements
1. Easy to add new sorting algorithms
2. Algorithms should be independently testable
3. Minimize code duplication

## Constraints

- All sorting algorithms must sort in-place where possible
- Support both ascending and descending order
- Handle empty and single-element arrays

## Expected Deliverables

### Class Design
- **SortStrategy**: Interface defining sorting contract
- **BubbleSortStrategy, QuickSortStrategy, MergeSortStrategy, HeapSortStrategy**: Concrete strategy implementations
- **Sorter**: Context class that uses strategies
- **Comparator**: Interface for custom comparison logic

### Key Operations
- `setStrategy(strategy)`: Set sorting algorithm - O(1)
- `sort(array)`: Sort using current strategy - O(varies by algorithm)
- `sortWithComparator(array, comparator)`: Sort with custom logic - O(varies)

### Design Patterns
- Strategy Pattern
- Template Method Pattern (optional for common sorting logic)

## Example Usage

```
Sorter sorter = new Sorter();
int[] data = {5, 2, 8, 1, 9};

sorter.setStrategy(new QuickSortStrategy());
sorter.sort(data); // Uses Quick Sort

sorter.setStrategy(new MergeSortStrategy());
sorter.sort(data); // Uses Merge Sort
```

## Test Cases

### Test Case 1
**Input**: Array [5,2,8,1,9] with QuickSort strategy  
**Expected Output**: Sorted array [1,2,5,8,9]

### Test Case 2
**Input**: Switch strategy from BubbleSort to MergeSort mid-execution  
**Expected Output**: Strategy changes successfully, correct sorting

### Test Case 3
**Input**: Custom comparator for descending order  
**Expected Output**: Array sorted in descending order

## Evaluation Criteria

- Proper Strategy pattern implementation
- Clean separation between algorithms
- Support for generic types
- Performance tracking implementation
- Extensibility for new algorithms

## Additional Notes

Consider how to choose the optimal algorithm based on input size. Think about stability requirements for sorting.
