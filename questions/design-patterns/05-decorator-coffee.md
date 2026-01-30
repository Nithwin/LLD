# Decorator Pattern for Coffee Shop

**Category**: Design Patterns  
**Difficulty**: Medium

## Problem Statement

Design a coffee shop ordering system where customers can customize their beverages with various add-ons (milk, sugar, whipped cream, caramel, etc.). Use the Decorator pattern to dynamically add features to beverages without modifying existing code.

## Requirements

### Functional Requirements
1. Support base beverages (Espresso, Latte, Cappuccino, Americano)
2. Allow multiple add-ons to be added to any beverage
3. Calculate total cost based on base beverage and add-ons
4. Generate detailed description of the final beverage
5. Support size variations (Small, Medium, Large)

### Non-Functional Requirements
1. Easy to add new beverages and add-ons
2. Maintain single responsibility for each class
3. Support unlimited combinations of add-ons

## Constraints

- Each add-on has its own cost
- Add-ons can be added multiple times (e.g., double sugar)
- Base beverage cost varies by size
- Final description should list all components

## Expected Deliverables

### Class Design
- **Beverage**: Abstract base component
- **Espresso, Latte, Cappuccino, Americano**: Concrete components
- **AddOnDecorator**: Abstract decorator
- **Milk, Sugar, WhippedCream, Caramel, Vanilla**: Concrete decorators
- **Size**: Enum for beverage sizes

### Key Operations
- `getCost()`: Calculate total cost - O(n) where n is number of decorators
- `getDescription()`: Get full description - O(n)
- `addAddOn(addOn)`: Add decorator - O(1)

### Design Patterns
- Decorator Pattern
- Builder Pattern (optional for complex orders)

## Example Usage

```
Beverage beverage = new Espresso(Size.MEDIUM);
beverage = new Milk(beverage);
beverage = new Sugar(beverage);
beverage = new WhippedCream(beverage);

System.out.println(beverage.getDescription()); // "Medium Espresso, Milk, Sugar, Whipped Cream"
System.out.println(beverage.getCost()); // 5.50
```

## Test Cases

### Test Case 1
**Input**: Espresso with milk and sugar  
**Expected Output**: Correct cost calculation and description

### Test Case 2
**Input**: Latte with double whipped cream  
**Expected Output**: Whipped cream cost added twice

### Test Case 3
**Input**: Large Cappuccino with multiple add-ons  
**Expected Output**: Size-based pricing plus all add-on costs

## Evaluation Criteria

- Correct Decorator pattern implementation
- Proper inheritance and composition usage
- Flexible addition of new decorators
- Accurate cost calculation
- Clean code organization

## Sample Tests

### Sample Test 1: Multiple Decorators
```java
// Input
Beverage beverage = new Espresso(Size.MEDIUM);
beverage = new Milk(beverage);
beverage = new Sugar(beverage);
beverage = new WhippedCream(beverage);

System.out.println(beverage.getDescription());
System.out.println("Total: $" + beverage.getCost());

// Output
Medium Espresso, Milk, Sugar, Whipped Cream
Total: $5.50
```

### Sample Test 2: Size-Based Pricing
```java
// Input
Beverage small = new Latte(Size.SMALL);
small = new Caramel(small);

Beverage large = new Latte(Size.LARGE);
large = new Caramel(large);

// Output
Small Latte, Caramel - Cost: $4.00
Large Latte, Caramel - Cost: $6.50
```

## Additional Notes

Consider how to handle add-on dependencies (e.g., some add-ons only work with certain beverages). Think about seasonal or limited-time add-ons.
