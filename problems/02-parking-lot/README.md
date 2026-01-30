# Problem 02: Parking Lot System

## Difficulty: Medium

## Problem Statement

Design a **Parking Lot Management System** that can efficiently manage parking spots for different vehicle types, calculate parking fees, and track availability.

## Requirements

### Functional Requirements

1. **Multiple Vehicle Types**: Support cars, bikes, and trucks
2. **Multiple Spot Types**: Compact, Large, and Handicapped spots
3. **Entry Management**: Assign appropriate spot when vehicle enters
4. **Exit Management**: Calculate fee when vehicle exits
5. **Spot Availability**: Track available and occupied spots
6. **Pricing**: Different hourly rates for different vehicle types
   - Bike: ₹10/hour
   - Car: ₹20/hour
   - Truck: ₹50/hour

### Non-Functional Requirements

1. System should be extensible for new vehicle/spot types
2. Efficient spot allocation algorithm
3. Thread-safe operations (bonus)
4. Support multiple parking floors (bonus)

## Expected Classes/Entities

Consider these entities:
- **ParkingLot**: Main system manager (Singleton pattern)
- **ParkingSpot**: Base class for different spot types
- **Vehicle**: Base class for different vehicle types
- **Ticket**: Represents parking ticket with entry time
- **ParkingStrategy**: Strategy for finding available spots

## Design Patterns to Consider

- **Singleton Pattern**: For ParkingLot manager
- **Factory Pattern**: For creating vehicles and spots
- **Strategy Pattern**: For spot allocation algorithms
- **Builder Pattern**: For parking lot configuration (bonus)

## Example Usage

```cpp
ParkingLot* parkingLot = ParkingLot::getInstance(100); // 100 spots

// Car enters
Ticket* ticket1 = parkingLot->parkVehicle("CAR", "TN-01-1234");
// Output: Vehicle parked at spot: A-23

// 2 hours later, car exits
double fee = parkingLot->unparkVehicle(ticket1);
// Output: Total fee: ₹40 (2 hours * ₹20/hour)

// Check availability
int available = parkingLot->getAvailableSpots("CAR");
// Output: Available car spots: 99
```

## Test Cases

### Test Case 1: Basic Parking
**Input**: 
- Park Car: TN-01-1234
- Park Bike: TN-02-5678
- Park Truck: TN-03-9012

**Expected**: 
- All vehicles assigned appropriate spots
- Availability updated correctly

### Test Case 2: Full Parking
**Input**: 
- Parking lot with 2 spots
- Attempt to park 3 vehicles

**Expected**: 
- First 2 vehicles parked
- Third vehicle rejected with "No spots available"

### Test Case 3: Fee Calculation
**Input**: 
- Park car for 3.5 hours

**Expected**: 
- Fee: ₹70 (3.5 * ₹20)

## Design Considerations

1. How to handle different spot sizes for different vehicles?
2. How to efficiently find available spots?
3. How to handle partial hours in billing?
4. How to support different pricing strategies?

## Bonus Challenges

- [ ] Multiple floors with floor-specific spot numbering
- [ ] Reserved spots for VIP/monthly pass holders
- [ ] Peak hour pricing
- [ ] Different spot allocation strategies (nearest to entry, random, etc.)
- [ ] Support for electric vehicle charging spots

## Evaluation Criteria

- [ ] Proper use of design patterns
- [ ] Clean OOP design with SOLID principles
- [ ] Extensibility for new requirements
- [ ] Proper encapsulation and abstraction
- [ ] Edge case handling

---

**Good Luck!** 🚗
