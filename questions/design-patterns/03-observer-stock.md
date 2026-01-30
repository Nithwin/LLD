# Observer Pattern for Stock Market

**Category**: Design Patterns  
**Difficulty**: Medium

## Problem Statement

Design a stock market monitoring system where multiple investors can subscribe to stock price updates. When a stock price changes, all subscribed investors should be notified automatically.

## Requirements

### Functional Requirements
1. Allow investors to subscribe to specific stocks
2. Notify all subscribers when stock price changes
3. Support multiple notification channels (Email, SMS, Push Notification)
4. Allow investors to unsubscribe from stocks
5. Track price history for each stock

### Non-Functional Requirements
1. Notifications should be sent asynchronously
2. System should handle thousands of subscribers efficiently
3. Minimize coupling between stocks and investors

## Constraints

- Stock prices must be non-negative
- Each investor can subscribe to multiple stocks
- Notification delivery failures should not affect other subscribers

## Expected Deliverables

### Class Design
- **Stock**: Subject class that maintains state and notifies observers
- **Investor**: Observer interface/abstract class
- **EmailInvestor, SMSInvestor, PushInvestor**: Concrete observer implementations
- **StockMarket**: Manages multiple stocks

### Key Operations
- `subscribe(investor, stock)`: Add observer - O(1)
- `unsubscribe(investor, stock)`: Remove observer - O(1)
- `updatePrice(stock, newPrice)`: Update and notify - O(n) where n is number of subscribers
- `getPrice(stock)`: Get current price - O(1)

### Design Patterns
- Observer Pattern
- Strategy Pattern (for notification methods)

## Example Usage

```
Stock appleStock = new Stock("AAPL", 150.00);
Investor investor1 = new EmailInvestor("investor1@email.com");
Investor investor2 = new SMSInvestor("+1234567890");

appleStock.subscribe(investor1);
appleStock.subscribe(investor2);

appleStock.setPrice(155.00); // Both investors notified
```

## Test Cases

### Test Case 1
**Input**: Subscribe 3 investors to a stock, update price  
**Expected Output**: All 3 investors receive notification

### Test Case 2
**Input**: Investor unsubscribes, then price updates  
**Expected Output**: Unsubscribed investor does not receive notification

### Test Case 3
**Input**: One notification fails  
**Expected Output**: Other notifications still delivered successfully

## Evaluation Criteria

- Correct Observer pattern implementation
- Loose coupling between subjects and observers
- Efficient notification mechanism
- Proper subscription management
- Error handling for notification failures

## Additional Notes

Consider implementing a push vs pull model for notifications. Think about how to handle notification ordering and priority.
