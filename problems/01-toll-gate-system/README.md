# Problem 01: Toll Gate System

## Difficulty: Medium

## Problem Statement

Design and implement a **Toll Gate System** that manages vehicles passing through a toll booth. The system should handle different types of vehicles, calculate toll charges based on vehicle type, and provide VIP discounts.

## Requirements

### Functional Requirements

1. **Vehicle Types**: Support different vehicle types:
   - Bike: ₹20 toll
   - Car: ₹50 toll
   - Truck: ₹100 toll

2. **VIP Discount**: VIP vehicles should get 80% discount on toll charges

3. **Registration Tracking**: Record registration number for each vehicle

4. **Toll Collection**: Track total toll collected

5. **Vehicle Bill**: Display toll charge for each vehicle passing through

### Non-Functional Requirements

1. System should be extensible to add new vehicle types
2. Easy to modify toll rates
3. Should handle multiple vehicles efficiently
4. Clean separation of concerns

## Expected Classes/Entities

Consider the following entities in your design:

- **Vehicle**: Base class for all vehicle types
- **Bike, Car, Truck**: Specific vehicle implementations
- **TollSystem**: Manages toll operations
- You may add more classes as needed

## Design Patterns to Consider

- **Inheritance**: For vehicle type hierarchy
- **Polymorphism**: For different vehicle behaviors
- **Encapsulation**: To protect internal data
- **Factory Pattern** (Optional): For vehicle creation

## Example Usage

```cpp
TollSystem tollSystem;

// Vehicle passes through toll gate
tollSystem.passVehicle(1, "TN-01-1234", "car", false);
// Output: Vehicle TN-01-1234 passed. Toll: 50

// VIP vehicle passes
tollSystem.passVehicle(2, "TN-02-5678", "car", true);
// Output: Vehicle TN-02-5678 passed. Toll: 10 (80% discount)

// Get total collection
cout << "Total Collection: " << tollSystem.getTotalCollections(); 
// Output: Total Collection: 60
```

## Test Cases

### Test Case 1: Regular Vehicles
**Input**: 
- Bike: TN-01-1111, VIP: No
- Car: TN-01-2222, VIP: No
- Truck: TN-01-3333, VIP: No

**Expected Output**: 
- Bike toll: 20
- Car toll: 50
- Truck toll: 100
- Total: 170

### Test Case 2: VIP Discount
**Input**: 
- Car: TN-01-4444, VIP: Yes

**Expected Output**: 
- Car toll: 10 (80% discount applied)

### Test Case 3: Mixed Vehicles
**Input**: 
- Multiple vehicles of different types
- Some VIP, some regular

**Expected Output**: 
- Correct toll for each vehicle
- Accurate total collection

## Design Considerations

1. **How would you add a new vehicle type** (e.g., Bus)?
2. **How would you change discount rates** without modifying vehicle classes?
3. **How would you implement different discount strategies** (seasonal, membership levels)?
4. **How would you handle invalid vehicle types**?

## Bonus Challenges (Optional)

- [ ] Add support for time-based pricing (peak hours charge extra)
- [ ] Implement different membership tiers (Gold, Silver, Bronze)
- [ ] Add payment method tracking (Cash, Card, Digital)
- [ ] Generate daily/monthly toll collection reports
- [ ] Implement a FastTag automatic payment system

## Evaluation Criteria

Your solution will be evaluated on:

- [ ] **OOP Principles**: Proper use of inheritance, encapsulation, polymorphism
- [ ] **Code Structure**: Clean, organized, and maintainable code
- [ ] **Design Patterns**: Appropriate pattern usage
- [ ] **Extensibility**: Easy to add new features
- [ ] **Comments**: Clear explanation of design decisions
- [ ] **Edge Cases**: Handling invalid inputs
- [ ] **Testing**: Works with all test cases

## Hints

- Think about what properties are common to all vehicles
- Consider using virtual functions for vehicle-specific behavior
- The `this` pointer is useful for disambiguation
- Think about where discount logic should be applied

## Sample Solution

A sample solution is provided in `sample_solution.cpp` for reference. Try solving it yourself first before looking at the sample!

---

**Good Luck!** 🚀 Remember, there are multiple valid approaches to solve this problem. Focus on clean code and good design principles.
