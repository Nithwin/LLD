# Trie for Autocomplete

**Category**: Data Structures  
**Difficulty**: Medium

## Problem Statement

Design a Trie (prefix tree) data structure to implement an autocomplete system. The system should efficiently store words and provide suggestions based on prefixes.

## Requirements

### Functional Requirements
1. Insert words into the trie
2. Search for exact word matches
3. Find all words with a given prefix
4. Delete words from the trie
5. Count words with a given prefix

### Non-Functional Requirements
1. Space-efficient storage
2. Fast prefix-based searches
3. Support large dictionaries

## Constraints

- Words contain only lowercase letters
- Maximum word length is 100 characters
- Support up to 1 million words
- Prefix search should return top 10 suggestions

## Expected Deliverables

### Class Design
- **TrieNode**: Node structure with children and end marker
- **Trie**: Main trie class with operations

### Key Operations
- `insert(word)`: Add word - O(m) where m is word length
- `search(word)`: Check if word exists - O(m)
- `startsWith(prefix)`: Check if prefix exists - O(m)
- `findWordsWithPrefix(prefix)`: Get all matching words - O(m + n)
- `delete(word)`: Remove word - O(m)

### Design Patterns
- Composite Pattern (for tree structure)

## Example Usage

```
Trie trie = new Trie();
trie.insert("apple");
trie.insert("app");
trie.insert("application");

trie.search("app");                    // Returns true
trie.startsWith("app");                // Returns true
trie.findWordsWithPrefix("app");       // Returns ["app", "apple", "application"]
```

## Test Cases

### Test Case 1
**Input**: Insert ["cat", "car", "card"], search "car"  
**Expected Output**: true

### Test Case 2
**Input**: Find words with prefix "ca"  
**Expected Output**: ["cat", "car", "card"]

### Test Case 3
**Input**: Delete "car", then search "car"  
**Expected Output**: false

## Evaluation Criteria

- Correct trie implementation
- Efficient prefix search
- Proper memory management
- Delete operation correctness
- Handling of edge cases


## Sample Tests

### Sample Test 1: Autocomplete Suggestions
```java
// Input
Trie trie = new Trie();
trie.insert("apple");
trie.insert("app");
trie.insert("application");
List<String> suggestions = trie.findWordsWithPrefix("app");

// Output
[app, apple, application]
```

### Sample Test 2: Word Deletion
```java
// Input
trie.insert("cat");
trie.insert("car");
System.out.println(trie.search("car"));
trie.delete("car");
System.out.println(trie.search("car"));

// Output
true
false
```

## Additional Notes

Consider optimizing for space using compressed tries. Think about ranking suggestions by frequency or relevance.

