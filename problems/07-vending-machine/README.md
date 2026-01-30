# Problem 07: Vending Machine

## Difficulty: Medium

## Problem Statement

Design a **Vending Machine** that dispenses products, accepts payments, returns change, and manages inventory. The system should handle different payment methods and product selection.

## Requirements

### Functional Requirements

1. **Product Management**
   - Store products with name, price, quantity
   - Track inventory
   - Update stock

2. **Payment Handling**
   - Accept coins: ₹1, ₹2, ₹5, ₹10
   - Accept notes: ₹20, ₹50, ₹100
   - Calculate total payment

3. **Dispensing**
   - Dispense selected product
   - Return change if any
   - Handle out of stock

4. **States**
   - Idle, SelectingProduct, PaymentPending, Dispensing

## Design Patterns to Consider

- **State Pattern**: Machine states
- **Factory Pattern**: Product creation
- **Singleton Pattern**: Machine instance
- **Strategy Pattern**: Payment strategies

## Test Cases with Input/Output

### Test Case 1: Successful Purchase
**Input:**
```cpp
VendingMachine* vm = VendingMachine::getInstance();

vm->addProduct("P001", "Coke", 20, 10);
vm->addProduct("P002", "Chips", 10, 15);

vm->selectProduct("P001");
vm->insertCoin(10);
vm->insertCoin(10);
vm->dispense();
```

**Expected Output:**
```
Product added: Coke - ₹20 (10 units)
Product added: Chips - ₹10 (15 units)

Product selected: Coke - ₹20
Payment pending: ₹20
Coin inserted: ₹10. Total: ₹10
Coin inserted: ₹10. Total: ₹20
Payment complete!
Dispensing Coke...
Product dispensed. Thank you!
Remaining stock: 9 units
```

### Test Case 2: Purchase with Change
**Input:**
```cpp
vm->selectProduct("P002"); // ₹10
vm->insertNote(20);
vm->dispense();
```

**Expected Output:**
```
Product selected: Chips - ₹10
Payment pending: ₹10
Note inserted: ₹20. Total: ₹20
Payment received: ₹20
Change to return: ₹10
Returning: 1 x ₹10 coin
Dispensing Chips...
Product dispensed. Thank you!
```

### Test Case 3: Insufficient Payment
**Input:**
```cpp
vm->selectProduct("P001"); // ₹20
vm->insertCoin(10);
vm->dispense();
```

**Expected Output:**
```
Product selected: Coke - ₹20
Payment pending: ₹20
Coin inserted: ₹10. Total: ₹10
ERROR: Insufficient payment!
Required: ₹20, Paid: ₹10, Remaining: ₹10
Please insert ₹10 more or press cancel
```

### Test Case 4: Out of Stock
**Input:**
```cpp
// Buy all 9 remaining Coke
for(int i=0; i<9; i++) {
    vm->selectProduct("P001");
    vm->insertNote(20);
    vm->dispense();
}
// Try to buy one more
vm->selectProduct("P001");
```

**Expected Output:**
```
[After 9 purchases]
Stock depleted for Coke
ERROR: Product P001 is out of stock!
Please select another product
```

### Test Case 5: Cancel Transaction
**Input:**
```cpp
vm->selectProduct("P001");
vm->insertCoin(10);
vm->cancel();
```

**Expected Output:**
```
Product selected: Coke - ₹20
Payment pending: ₹20
Coin inserted: ₹10. Total: ₹10
Transaction cancelled
Returning coins: ₹10
Machine ready for next customer
```

### Test Case 6: Inventory Check
**Input:**
```cpp
vm->displayInventory();
```

**Expected Output:**
```
=== Vending Machine Inventory ===
P001: Coke - ₹20 [0 units] OUT OF STOCK
P002: Chips - ₹10 [14 units] Available
Total Products: 2
Total Value: ₹140
```

### Test Case 7: Complex Change Return
**Input:**
```cpp
vm->selectProduct("P002"); // ₹10
vm->insertNote(100);
vm->dispense();
```

**Expected Output:**
```
Product selected: Chips - ₹10
Note inserted: ₹100. Total: ₹100
Change to return: ₹90
Optimal change calculation...
Returning:
  1 x ₹50 note
  2 x ₹20 notes
Change returned: ₹90
Dispensing Chips...
```

## Bonus Challenges

- [ ] Multiple vending machine locations
- [ ] Admin panel for restocking
- [ ] Digital payment (UPI, Card)
- [ ] Product expiry tracking
- [ ] Sales reports
- [ ] Temperature control (for cold drinks)

## Evaluation Criteria

- [ ] Proper state pattern implementation
- [ ] Accurate change calculation
- [ ] Thread-safe operations
- [ ] Inventory management
- [ ] Clean state transitions

---

**Good Luck!** 🥤
