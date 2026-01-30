# Search Engine Indexer

**Category**: Real-world Applications | **Difficulty**: Hard

## Problem Statement
Design a search engine indexer that crawls documents, builds inverted index, and supports ranked search queries.

## Requirements
### Functional Requirements
1. Crawl and index documents
2. Build inverted index
3. Search with ranking
4. Support phrase queries
5. Update index incrementally

### Non-Functional Requirements
1. Fast indexing
2. Efficient search (< 100ms)
3. Handle large document corpus

## Expected Deliverables
**Classes**: Indexer, InvertedIndex, Document, Query, Ranker, Crawler

**Key Operations**: indexDocument() - O(n), search() - O(k log n), updateIndex() - O(m)

**Patterns**: Builder, Strategy, Iterator

## Test Cases
1. Index multiple documents
2. Search with ranking
3. Incremental index update
