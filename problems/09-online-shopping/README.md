# Problem 09: Online Shopping System

## Difficulty: Hard

## Problem Statement

Design an **Online Shopping Platform** (like Amazon/Flipkart) with product catalog, cart, orders, payments, and user management.

## Requirements

### Functional Requirements

1. **User Management**: Registration, login, profiles
2. **Product Catalog**: Categories, search, filters
3. **Shopping Cart**: Add/remove items, quantity update
4. **Orders**: Checkout, order tracking, history
5. **Payments**: Multiple payment methods
6. **Inventory**: Stock management
7. **Reviews**: Product ratings and reviews

## Design Patterns

- **Singleton**: System manager
- **Factory**: Product/Order creation
- **Observer**: Order status notifications
- **Strategy**: Payment & shipping strategies
- **Decorator**: Product customization

## Test Cases with Input/Output

### Test Case 1: User Registration & Login
**Input:**
```cpp
ShoppingSystem* system = ShoppingSystem::getInstance();

User* user1 = system->registerUser("john@email.com", "John Doe", "password123", "9876543210");
system->login("john@email.com", "password123");
```

**Expected Output:**
```
User registered successfully!
User ID: U001
Name: John Doe
Email: john@email.com
Phone: 9876543210
Welcome bonus: ₹100 added to wallet

Login successful!
Welcome back, John Doe!
```

### Test Case 2: Browse & Search Products
**Input:**
```cpp
// Add products
system->addProduct("P001", "iPhone 15", "Electronics", 79999, 50);
system->addProduct("P002", "Samsung TV", "Electronics", 45000, 30);
system->addProduct("P003", "Nike Shoes", "Fashion", 5999, 100);

// Search
vector<Product*> results = system->searchProducts("iPhone");
```

**Expected Output:**
```
3 products added to catalog

Search results for "iPhone":
1. iPhone 15 - ₹79,999
   Category: Electronics
   Stock: 50 units
   Rating: Not rated yet
   
Found 1 product(s)
```

### Test Case 3: Add to Cart
**Input:**
```cpp
Cart* cart = user1->getCart();
cart->addItem("P001", 1);
cart->addItem("P003", 2);
cart->viewCart();
```

**Expected Output:**
```
Item added to cart: iPhone 15 x1
Item added to cart: Nike Shoes x2

=== Shopping Cart ===
1. iPhone 15
   Qty: 1 x ₹79,999 = ₹79,999

2. Nike Shoes
   Qty: 2 x ₹5,999 = ₹11,998

Subtotal: ₹91,997
Shipping: ₹100
Tax (18%): ₹16,559
Total: ₹1,08,656
```

### Test Case 4: Apply Coupon
**Input:**
```cpp
cart->applyCoupon("FIRST100");
```

**Expected Output:**
```
Coupon FIRST100 applied!
Discount: ₹100

Updated Total:
Subtotal: ₹91,997
Shipping: ₹100
Discount: -₹100
Tax (18%): ₹16,559
Final Total: ₹1,08,556
```

### Test Case 5: Checkout & Payment
**Input:**
```cpp
Address addr("123 Main St", "New York", "NY", "10001");
Order* order = cart->checkout(addr, "CARD");
order->processPayment("4111111111111111", "12/26", "123");
```

**Expected Output:**
```
Order created: ORD001
Checking inventory...
  iPhone 15: 50 available ✓
  Nike Shoes: 100 available ✓

Processing payment...
Card ending in 1111
Amount: ₹1,08,556
Payment successful! Transaction ID: TXN123456

Order confirmed!
Order ID: ORD001
Estimated Delivery: 3-5 business days
Tracking number will be sent to john@email.com

Updated Inventory:
  iPhone 15: 49 units
  Nike Shoes: 98 units
```

### Test Case 6: Order Tracking
**Input:**
```cpp
order->getStatus();
```

**Expected Output:**
```
Order ID: ORD001
Status: PROCESSING

Timeline:
✓ Order Placed - Jan 30, 2026 10:30 AM
✓ Payment Confirmed - Jan 30, 2026 10:31 AM
→ Processing - Current
  Shipped - Pending
  Out for Delivery - Pending
  Delivered - Pending

Items:
1. iPhone 15 x1
2. Nike Shoes x2

Shipping Address:
123 Main St, New York, NY 10001
```

### Test Case 7: Product Review
**Input:**
```cpp
// After delivery
order->markDelivered();
user1->writeReview("P001", 5, "Excellent phone! Highly recommended");
```

**Expected Output:**
```
Order ORD001 marked as DELIVERED
Delivery Date: Jan 35, 2026

Review posted successfully!
Product: iPhone 15
Rating: ⭐⭐⭐⭐⭐ (5/5)
Review: "Excellent phone! Highly recommended"
Reviewer: John Doe
Date: Jan 35, 2026

Product rating updated:
Average Rating: 5.0/5 (1 review)
```

### Test Case 8: Out of Stock Handling
**Input:**
```cpp
// Try to order more than available
cart->clear();
cart->addItem("P001", 60); // Only 49 left
```

**Expected Output:**
```
ERROR: Insufficient stock!
Product: iPhone 15
Requested: 60 units
Available: 49 units

Options:
1. Reduce quantity to 49
2. Get notified when back in stock
3. View similar products
```

## Bonus Challenges

- [ ] Wishlist functionality
- [ ] Flash sales with limited time
- [ ] Seller accounts & multi-vendor
- [ ] Return & refund management
- [ ] Recommendation engine
- [ ] Subscription orders
- [ ] Gift cards

## Evaluation Criteria

- [ ] Complete e-commerce flow
- [ ] Proper design patterns
- [ ] Inventory management
- [ ] Payment processing
- [ ] Scalable architecture

---

**Good Luck!** 🛒
