# Problem 06: ATM Machine

## Difficulty: Medium

## Problem Statement

Design an **ATM Machine System** that handles cash withdrawals, deposits, balance inquiries, and PIN management. The system should manage denominations, validate transactions, and ensure security.

## Requirements

### Functional Requirements

1. **User Operations**
   - Insert card and verify PIN
   - Check balance
   - Withdraw cash
   - Deposit cash
   - Change PIN

2. **Cash Management**
   - Track available denominations (₹100, ₹500, ₹2000)
   - Dispense optimal combination
   - Handle insufficient cash
   - Maximum withdrawal limit

3. **Security**
   - PIN validation (3 attempts)
   - Card blocking mechanism
   - Transaction timeout
   - Receipt generation

4. **Transaction Handling**
   - Check account balance
   - Update after transaction
   - Transaction history

### Non-Functional Requirements

1. Secure PIN handling
2. Concurrent transaction handling
3. Audit logging
4. Error handling

## Design Patterns to Consider

- **State Pattern**: ATM states (Idle, Card Inserted, PIN Entered, Transaction)
- **Chain of Responsibility**: Denomination dispensing
- **Strategy Pattern**: Different transaction types
- **Factory Pattern**: Create transactions

## Input/Output Examples

### Example 1: Successful Withdrawal

**Input:**
```cpp
ATM atm;
atm.loadCash(100, 50);  // 50 notes of ₹100
atm.loadCash(500, 30);  // 30 notes of ₹500

Card card("1234-5678-9012-3456", "1234");
atm.insertCard(card);
atm.enterPIN("1234");
atm.withdraw(2000);
```

**Output:**
```
Card inserted successfully
Enter PIN: ****
PIN verified

Current Balance: ₹50,000
Withdraw amount: ₹2000

Dispensing:
- 4 notes of ₹500

Transaction successful!
New Balance: ₹48,000

Receipt:
-----------------
Date: 2026-01-30
Type: Withdrawal
Amount: ₹2000
Balance: ₹48,000
-----------------
```

### Example 2: Insufficient Funds

**Input:**
```cpp
atm.enterPIN("1234");
atm.withdraw(60000);  // Account has only ₹50,000
```

**Output:**
```
ERROR: Insufficient funds
Available balance: ₹50,000
Requested amount: ₹60,000
Transaction cancelled
```

### Example 3: Denomination Unavailable

**Input:**
```cpp
// ATM has only ₹500 notes
atm.withdraw(1300);  // Can't make exact change
```

**Output:**
```
ERROR: Cannot dispense exact amount
Available denominations: ₹500
Suggested amounts: ₹1000, ₹1500, ₹2000
Transaction cancelled
```

## Test Cases

### Test Case 1: Complete Withdrawal Flow
**Input:**
```
1. Insert card: 1234-5678-9012-3456
2. Enter PIN: 1234
3. Select: Withdrawal
4. Amount: ₹3000
5. Confirm
```

**Expected Output:**
```
Balance inquiry: ₹50,000
Dispensing: 1×₹2000, 2×₹500
New balance: ₹47,000
Receipt printed
Card ejected
```

### Test Case 2: Wrong PIN Attempts
**Input:**
```
1. Insert card
2. Enter wrong PIN: 9999 (Attempt 1)
3. Enter wrong PIN: 8888 (Attempt 2)
4. Enter wrong PIN: 7777 (Attempt 3)
```

**Expected Output:**
```
Attempt 1: Incorrect PIN (2 attempts remaining)
Attempt 2: Incorrect PIN (1 attempt remaining)
Attempt 3: Card blocked
Please contact your bank
Card retained
```

### Test Case 3: Optimal Denomination Distribution
**Input:**
```
ATM Cash: ₹2000×10, ₹500×20, ₹100×50
Withdraw: ₹7200
```

**Expected Output:**
```
Dispensing:
- 3 notes of ₹2000 (₹6000)
- 2 notes of ₹500 (₹1000)
- 2 notes of ₹100 (₹200)
Total: ₹7200
```

### Test Case 4: Balance Inquiry
**Input:**
```
1. Insert card
2. Enter PIN
3. Select: Balance Inquiry
```

**Expected Output:**
```
Account Balance: ₹50,000
Available Balance: ₹50,000
Last transaction: Withdrawal ₹2000 on 2026-01-29
```

### Test Case 5: Deposit
**Input:**
```
1. Select: Deposit
2. Insert ₹5000 cash
3. Confirm
```

**Expected Output:**
```
Counting cash...
Amount deposited: ₹5000
New balance: ₹55,000
Receipt printed
Note: Amount will be credited after verification
```

## Design Considerations

1. How to handle denomination optimization?
2. How to prevent card skimming?
3. How to handle network failures?
4. How to manage ATM cash replenishment?
5. How to implement transaction rollback?

## Bonus Challenges

- [ ] Multi-currency support
- [ ] Bill payment functionality
- [ ] Mini statement printing
- [ ] Cardless withdrawal (OTP-based)
- [ ] QR code transactions
- [ ] Biometric authentication

## Evaluation Criteria

- [ ] Proper state machine implementation
- [ ] Secure PIN handling
- [ ] Optimal cash dispensing algorithm
- [ ] Complete error handling
- [ ] Transaction integrity

---

**Good Luck!** 🏧
