# Online Shopping Cart

**Category**: Real-world Applications | **Difficulty**: Medium

## Problem Statement
Design an e-commerce shopping cart system with product management, cart operations, and checkout functionality.

## Requirements
### Functional Requirements
1. Add/remove/update items in cart
2. Apply discount codes and promotions
3. Calculate total with tax
4. Save cart for later
5. Merge carts on login

### Non-Functional Requirements
1. Handle concurrent cart updates
2. Persist cart across sessions
3. Support guest and registered users

## Expected Deliverables
**Classes**: ShoppingCart, CartItem, Product, DiscountStrategy, PriceCalculator, User

**Key Operations**: addItem() - O(1), removeItem() - O(1), applyDiscount() - O(n), checkout() - O(n)

**Patterns**: Strategy, Observer, Memento

## Test Cases
1. Add multiple items and calculate total
2. Apply discount code
3. Merge guest cart with user cart on login
