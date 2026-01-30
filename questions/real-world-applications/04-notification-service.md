# Notification Service

**Category**: Real-world Applications | **Difficulty**: Medium

## Problem Statement
Design a multi-channel notification service supporting email, SMS, push notifications with priority handling and retry logic.

## Requirements
### Functional Requirements
1. Send notifications via multiple channels
2. Priority-based delivery
3. Retry failed notifications
4. User notification preferences
5. Notification templates

### Non-Functional Requirements
1. High throughput
2. Guaranteed delivery
3. Rate limiting per channel

## Expected Deliverables
**Classes**: NotificationService, Notification, Channel (Email/SMS/Push), RetryHandler, Template

**Key Operations**: sendNotification() - O(1), retryFailed() - O(1), setPreferences() - O(1)

**Patterns**: Strategy, Observer, Template Method

## Test Cases
1. Send notification via preferred channel
2. Retry failed notification
3. Respect user preferences
