# Parking Lot System

**Category**: System Components | **Difficulty**: Hard

## Problem Statement
Design a multi-floor parking lot system that manages different vehicle types (Car, Motorcycle, Truck) with intelligent spot allocation and fee calculation.

## Requirements
### Functional Requirements
1. Multiple floors with different spot types (Compact, Regular, Large)
2. Automatic spot assignment based on vehicle type
3. Real-time availability tracking per floor
4. Generate parking tickets with entry time
5. Calculate fees based on duration and vehicle type

### Non-Functional Requirements
1. Thread-safe for concurrent operations
2. Efficient spot allocation algorithm
3. Scalable to multiple parking lots

## Expected Deliverables
**Classes**: ParkingLot, Floor, ParkingSpot, Vehicle (Car/Motorcycle/Truck), Ticket, FeeCalculator

**Key Operations**: parkVehicle() - O(n), unparkVehicle() - O(1), getAvailableSpots() - O(1)

**Patterns**: Singleton, Strategy, Factory

## Test Cases
1. Park vehicles of different types
2. Handle full parking lot scenario
3. Calculate fees for various durations
