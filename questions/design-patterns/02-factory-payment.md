# Factory Pattern for Payment Processing

**Category**: Design Patterns  
**Difficulty**: Medium

## Problem Statement

Design a payment processing system that supports multiple payment methods (Credit Card, Debit Card, PayPal, UPI, Cryptocurrency). Use the Factory pattern to create appropriate payment processor instances based on payment type.

## Requirements

### Functional Requirements
1. Support multiple payment methods with different processing logic
2. Each payment method should validate payment details
3. Process payments and return transaction status
4. Generate transaction receipts
5. Handle payment failures and retries

### Non-Functional Requirements
1. Easy to add new payment methods without modifying existing code
2. Each payment processor should be independently testable
3. Secure handling of payment credentials

## Constraints

- Each payment method has different validation rules
- Transaction IDs must be unique
- Payment amount must be positive
- Support multiple currencies

## Expected Deliverables

### Class Design
- **PaymentProcessor**: Abstract base class/interface
- **PaymentFactory**: Factory class to create payment processors
- **CreditCardProcessor, DebitCardProcessor, PayPalProcessor, UPIProcessor, CryptoProcessor**: Concrete implementations
- **Transaction**: Class representing payment transaction
- **PaymentMethod**: Enum for payment types

### Key Operations
- `createProcessor(paymentMethod)`: Factory method to create processor - O(1)
- `validatePayment(details)`: Validate payment information - O(1)
- `processPayment(amount, details)`: Process the payment - O(1)
- `generateReceipt(transaction)`: Create transaction receipt - O(1)

### Design Patterns
- Factory Pattern
- Strategy Pattern (for different payment algorithms)

## Example Usage

```
PaymentFactory factory = new PaymentFactory();
PaymentProcessor processor = factory.createProcessor(PaymentMethod.CREDIT_CARD);

PaymentDetails details = new PaymentDetails("1234-5678-9012-3456", "12/25", "123");
Transaction transaction = processor.processPayment(100.00, details);

if (transaction.isSuccessful()) {
    Receipt receipt = processor.generateReceipt(transaction);
    receipt.print();
}
```

## Test Cases

### Test Case 1
**Input**: Create processors for all payment methods  
**Expected Output**: Correct processor instances created for each type

### Test Case 2
**Input**: Invalid credit card number  
**Expected Output**: Validation fails with appropriate error message

### Test Case 3
**Input**: Successful payment processing  
**Expected Output**: Transaction completed with unique transaction ID and receipt

## Evaluation Criteria

- Proper implementation of Factory pattern
- Open/Closed principle adherence
- Comprehensive validation logic
- Clean abstraction between payment methods
- Error handling and edge cases

## Additional Notes

Consider how to handle payment gateway integration, transaction logging, and refund processing. Think about security implications of storing payment details.
