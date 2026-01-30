# ATM Machine

**Category**: System Components | **Difficulty**: Medium

## Problem Statement
Design an ATM system supporting cash withdrawal, balance inquiry, and PIN validation with proper state management.

## Requirements
### Functional Requirements
1. Authenticate user with card and PIN
2. Check account balance
3. Withdraw cash with denomination selection
4. Deposit cash
5. Print transaction receipt

### Non-Functional Requirements
1. Secure PIN handling
2. Maintain cash inventory
3. Handle insufficient funds

## Expected Deliverables
**Classes**: ATM, Card, Account, Transaction, CashDispenser, State (Idle/CardInserted/PinEntered)

**Key Operations**: insertCard() - O(1), validatePIN() - O(1), withdraw() - O(1), checkBalance() - O(1)

**Patterns**: State, Chain of Responsibility, Proxy

## Test Cases
1. Successful withdrawal
2. Invalid PIN handling
3. Insufficient funds scenario
