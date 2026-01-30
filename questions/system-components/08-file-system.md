# File System Design

**Category**: System Components | **Difficulty**: Hard

## Problem Statement
Design an in-memory file system supporting file and directory operations like create, delete, move, and search.

## Requirements
### Functional Requirements
1. Create/delete files and directories
2. Move/copy files between directories
3. Search files by name or extension
4. Get file/directory size
5. Support file permissions

### Non-Functional Requirements
1. Efficient path resolution
2. Handle large directory structures
3. Thread-safe operations

## Expected Deliverables
**Classes**: FileSystem, File, Directory, Path, Permission

**Key Operations**: createFile() - O(1), delete() - O(n), move() - O(1), search() - O(n), getSize() - O(n)

**Patterns**: Composite, Singleton, Iterator

## Test Cases
1. Create nested directory structure
2. Move files between directories
3. Calculate directory size recursively
