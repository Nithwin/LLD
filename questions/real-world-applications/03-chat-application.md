# Chat Application

**Category**: Real-world Applications | **Difficulty**: Hard

## Problem Statement
Design a real-time chat application supporting one-on-one and group conversations with message delivery guarantees.

## Requirements
### Functional Requirements
1. Send/receive messages in real-time
2. Create group chats
3. Message read receipts
4. Search message history
5. File sharing

### Non-Functional Requirements
1. Message delivery guarantees
2. Handle offline users
3. Scalable to millions of users

## Expected Deliverables
**Classes**: ChatService, Conversation, Message, User, MessageQueue, NotificationService

**Key Operations**: sendMessage() - O(1), createGroup() - O(n), searchMessages() - O(log n), markAsRead() - O(1)

**Patterns**: Observer, Mediator, Command

## Test Cases
1. Send message in one-on-one chat
2. Group chat with multiple participants
3. Offline message delivery
