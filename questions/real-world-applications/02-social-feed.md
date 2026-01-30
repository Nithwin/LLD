# Social Media Feed

**Category**: Real-world Applications | **Difficulty**: Hard

## Problem Statement
Design a social media news feed system that displays posts from followed users, supports likes, comments, and ranking algorithms.

## Requirements
### Functional Requirements
1. Create and publish posts
2. Follow/unfollow users
3. Generate personalized feed
4. Like and comment on posts
5. Rank posts by relevance

### Non-Functional Requirements
1. Efficient feed generation
2. Real-time updates
3. Handle millions of users

## Expected Deliverables
**Classes**: Feed, Post, User, Comment, FeedGenerator, RankingAlgorithm

**Key Operations**: publishPost() - O(1), generateFeed() - O(n log n), likePost() - O(1), addComment() - O(1)

**Patterns**: Observer, Strategy, Factory

## Test Cases
1. Generate feed for user
2. Real-time post updates
3. Ranking algorithm application
