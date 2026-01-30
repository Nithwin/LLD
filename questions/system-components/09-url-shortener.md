# URL Shortener

**Category**: System Components | **Difficulty**: Medium

## Problem Statement
Design a URL shortening service that converts long URLs to short codes and redirects users efficiently.

## Requirements
### Functional Requirements
1. Generate short URL from long URL
2. Redirect short URL to original
3. Support custom aliases
4. Track click analytics
5. Set expiration for URLs

### Non-Functional Requirements
1. Unique short code generation
2. Fast redirection (O(1))
3. Handle high traffic

## Expected Deliverables
**Classes**: URLShortener, URLMapping, Analytics, CodeGenerator

**Key Operations**: shortenURL() - O(1), expandURL() - O(1), trackClick() - O(1), setExpiry() - O(1)

**Patterns**: Strategy, Singleton

## Test Cases
1. Shorten URL and verify redirection
2. Custom alias creation
3. Expired URL handling
