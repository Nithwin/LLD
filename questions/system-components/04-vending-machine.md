# Vending Machine

**Category**: System Components | **Difficulty**: Medium

## Problem Statement
Design a vending machine that accepts coins, dispenses products, and returns change.

## Requirements
### Functional Requirements
1. Display available products and prices
2. Accept multiple coin denominations
3. Dispense selected product
4. Return change
5. Handle out-of-stock scenarios

### Non-Functional Requirements
1. Maintain inventory
2. Track transactions
3. Handle insufficient payment

## Expected Deliverables
**Classes**: VendingMachine, Product, Inventory, CoinHandler, State (Idle/HasMoney/Dispensing)

**Key Operations**: insertCoin() - O(1), selectProduct() - O(1), dispense() - O(1), returnChange() - O(1)

**Patterns**: State, Strategy, Singleton

## Test Cases
1. Purchase product with exact change
2. Purchase with extra coins, verify change
3. Handle out-of-stock product
