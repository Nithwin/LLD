# Builder Pattern for Meal Ordering

**Category**: Design Patterns  
**Difficulty**: Medium

## Problem Statement

Design a meal ordering system for a restaurant where customers can build custom meals by selecting main course, side dishes, drinks, and desserts. Use the Builder pattern to construct complex meal objects step by step.

## Requirements

### Functional Requirements
1. Build meals with multiple components (main, sides, drink, dessert)
2. Support different meal types (Veg, Non-Veg, Vegan)
3. Calculate total price and calories
4. Generate itemized bill
5. Support combo meals with discounts

### Non-Functional Requirements
1. Fluent interface for meal building
2. Immutable meal objects once built
3. Validation of meal combinations

## Constraints

- Each meal must have at least a main course
- Maximum 3 side dishes per meal
- Some items are incompatible (e.g., vegan meal with dairy)
- Combo meals have predefined combinations

## Expected Deliverables

### Class Design
- **Meal**: Product class
- **MealBuilder**: Abstract builder interface
- **VegMealBuilder, NonVegMealBuilder, VeganMealBuilder**: Concrete builders
- **MealDirector**: Director class for common meal configurations
- **Item**: Class representing individual food items

### Key Operations
- `setMainCourse(item)`: Add main course - O(1)
- `addSide(item)`: Add side dish - O(1)
- `setDrink(item)`: Add drink - O(1)
- `setDessert(item)`: Add dessert - O(1)
- `build()`: Construct final meal - O(1)

### Design Patterns
- Builder Pattern
- Fluent Interface

## Example Usage

```
MealBuilder builder = new VegMealBuilder();
Meal meal = builder
    .setMainCourse(new Item("Veg Burger", 5.99))
    .addSide(new Item("Fries", 2.99))
    .addSide(new Item("Salad", 3.49))
    .setDrink(new Item("Coke", 1.99))
    .setDessert(new Item("Ice Cream", 2.49))
    .build();

System.out.println(meal.getTotalPrice());
meal.printBill();
```

## Test Cases

### Test Case 1
**Input**: Build meal with all components  
**Expected Output**: Complete meal with correct price

### Test Case 2
**Input**: Attempt to add 4 side dishes  
**Expected Output**: Error or only first 3 accepted

### Test Case 3
**Input**: Build vegan meal with dairy item  
**Expected Output**: Validation error

## Evaluation Criteria

- Proper Builder pattern implementation
- Fluent interface design
- Immutability of built objects
- Validation logic
- Clean separation of construction from representation

## Sample Tests

### Sample Test 1: Complete Meal Build
```java
// Input
MealBuilder builder = new VegMealBuilder();
Meal meal = builder
    .setMainCourse(new Item("Veg Burger", 5.99))
    .addSide(new Item("Fries", 2.99))
    .addSide(new Item("Salad", 3.49))
    .setDrink(new Item("Coke", 1.99))
    .setDessert(new Item("Ice Cream", 2.49))
    .build();

meal.printBill();

// Output
=== MEAL BILL ===
Main: Veg Burger - $5.99
Sides: Fries - $2.99, Salad - $3.49
Drink: Coke - $1.99
Dessert: Ice Cream - $2.49
Total: $16.95
Calories: 1250
```

### Sample Test 2: Validation Error
```java
// Input
MealBuilder builder = new VeganMealBuilder();
Meal meal = builder
    .setMainCourse(new Item("Vegan Burger", 6.99))
    .setDrink(new Item("Milk", 1.99))  // Not vegan!
    .build();

// Output
Error: Milk is not compatible with Vegan meal type
Build failed: Please use vegan-compatible items only
```

## Additional Notes

Consider how to handle special dietary requirements. Think about meal customization and ingredient substitutions.
