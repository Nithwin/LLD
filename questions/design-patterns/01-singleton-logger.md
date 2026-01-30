# Singleton Logger System

**Category**: Design Patterns  
**Difficulty**: Easy

## Problem Statement

Design a thread-safe logging system that ensures only one instance of the logger exists throughout the application lifecycle. The logger should support multiple log levels and write logs to both console and file.

## Requirements

### Functional Requirements
1. Implement a singleton pattern to ensure only one logger instance exists
2. Support multiple log levels: DEBUG, INFO, WARNING, ERROR, FATAL
3. Write logs to both console and file simultaneously
4. Include timestamp with each log entry
5. Allow configuration of minimum log level

### Non-Functional Requirements
1. Must be thread-safe for concurrent access
2. Should handle file I/O errors gracefully
3. Minimize performance overhead

## Constraints

- The logger instance must be created lazily (on first use)
- Log file path should be configurable
- Maximum log file size should be configurable with rotation support

## Expected Deliverables

### Class Design
- **Logger**: Singleton class managing log operations
- **LogLevel**: Enum representing different log levels
- **LogEntry**: Class representing a single log entry

### Key Operations
- `getInstance()`: Get the singleton logger instance - O(1)
- `log(level, message)`: Write a log entry - O(1)
- `setLogLevel(level)`: Configure minimum log level - O(1)

### Design Patterns
- Singleton Pattern (thread-safe implementation)

## Example Usage

```
Logger logger = Logger.getInstance();
logger.setLogLevel(LogLevel.INFO);
logger.log(LogLevel.INFO, "Application started");
logger.log(LogLevel.DEBUG, "This won't be logged");
logger.log(LogLevel.ERROR, "An error occurred");
```

## Test Cases

### Test Case 1
**Input**: Multiple threads requesting logger instance  
**Expected Output**: All threads receive the same instance

### Test Case 2
**Input**: Log messages with different levels  
**Expected Output**: Only messages at or above configured level are logged

### Test Case 3
**Input**: Concurrent log writes from multiple threads  
**Expected Output**: All logs are written correctly without data corruption

## Evaluation Criteria

- Correct singleton implementation with thread safety
- Proper handling of log levels
- Clean separation of concerns
- Efficient file I/O handling
- Comprehensive error handling

## Additional Notes

Consider using double-checked locking or other thread-safe initialization techniques. Think about how to handle log file rotation when size limits are reached.
