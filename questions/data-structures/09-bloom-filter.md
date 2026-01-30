# Bloom Filter Implementation

**Category**: Data Structures  
**Difficulty**: Medium

## Problem Statement

Design a Bloom Filter, a space-efficient probabilistic data structure for testing set membership. The filter should support adding elements and checking membership with configurable false positive rate.

## Requirements

### Functional Requirements
1. Add elements to the filter
2. Check if element might be in set
3. Configure false positive probability
4. Calculate optimal bit array size and hash functions
5. Support union of multiple bloom filters

### Non-Functional Requirements
1. Space-efficient (much smaller than actual set)
2. O(k) operations where k is number of hash functions
3. No false negatives allowed

## Constraints

- False positive rate must be configurable
- No deletion support (standard bloom filter)
- Bit array size determined by expected elements and error rate
- Number of hash functions optimized for performance

## Expected Deliverables

### Class Design
- **BloomFilter**: Main filter class with bit array
- **HashFunction**: Interface for hash functions

### Key Operations
- `add(element)`: Add element to filter - O(k)
- `mightContain(element)`: Check membership - O(k)
- `getSize()`: Get bit array size - O(1)
- `getFalsePositiveRate()`: Get current FP rate - O(1)

### Design Patterns
- Strategy Pattern (for hash functions)

## Example Usage

```
// Expected 1000 elements, 1% false positive rate
BloomFilter<String> filter = new BloomFilter<>(1000, 0.01);

filter.add("apple");
filter.add("banana");

filter.mightContain("apple");   // true (definitely added)
filter.mightContain("orange");  // false (definitely not added)
filter.mightContain("grape");   // might be false positive
```

## Test Cases

### Test Case 1
**Input**: Add 1000 elements, check all  
**Expected Output**: All return true (no false negatives)

### Test Case 2
**Input**: Check 1000 elements not added  
**Expected Output**: False positive rate within configured limit

### Test Case 3
**Input**: Union two bloom filters  
**Expected Output**: Combined filter contains all elements

## Evaluation Criteria

- Correct bloom filter implementation
- Proper hash function usage
- Accurate false positive rate
- Optimal parameter calculation
- Space efficiency

## Additional Notes

Consider using MurmurHash or other fast hash functions. Think about counting bloom filters for deletion support.
