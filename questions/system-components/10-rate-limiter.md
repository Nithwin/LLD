# Rate Limiter

**Category**: System Components | **Difficulty**: Hard

## Problem Statement
Design a rate limiter that restricts the number of requests a user can make within a time window using various algorithms.

## Requirements
### Functional Requirements
1. Limit requests per user/IP
2. Support multiple algorithms (Token Bucket, Sliding Window, Fixed Window)
3. Configurable rate limits
4. Return appropriate error for exceeded limits
5. Support different limits for different endpoints

### Non-Functional Requirements
1. Thread-safe implementation
2. Low latency checking
3. Memory efficient

## Expected Deliverables
**Classes**: RateLimiter, TokenBucket, SlidingWindow, FixedWindow, Request

**Key Operations**: allowRequest() - O(1), resetLimit() - O(1), getRemainingQuota() - O(1)

**Patterns**: Strategy, Singleton

## Test Cases
1. Allow requests within limit
2. Block requests exceeding limit
3. Reset after time window
