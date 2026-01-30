# Food Delivery System

**Category**: Real-world Applications | **Difficulty**: Hard

## Problem Statement
Design a food delivery platform managing restaurants, orders, delivery partners, and real-time tracking.

## Requirements
### Functional Requirements
1. Browse restaurants and menus
2. Place orders with customization
3. Assign delivery partners
4. Track order status in real-time
5. Handle payments and refunds

### Non-Functional Requirements
1. Efficient delivery partner assignment
2. Real-time order tracking
3. Handle peak hours

## Expected Deliverables
**Classes**: DeliveryService, Restaurant, Order, DeliveryPartner, AssignmentAlgorithm, Payment

**Key Operations**: placeOrder() - O(1), assignPartner() - O(n), trackOrder() - O(1), processPayment() - O(1)

**Patterns**: Strategy, Observer, State, Factory

## Test Cases
1. Place order and assign delivery partner
2. Track order status
3. Handle order cancellation
