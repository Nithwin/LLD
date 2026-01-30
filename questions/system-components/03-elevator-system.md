# Elevator System

**Category**: System Components | **Difficulty**: Hard

## Problem Statement
Design an elevator control system for a building with multiple elevators that efficiently handles passenger requests.

## Requirements
### Functional Requirements
1. Handle up and down requests from floors
2. Optimize elevator assignment to minimize wait time
3. Support multiple elevators
4. Display current floor and direction
5. Handle emergency stop

### Non-Functional Requirements
1. Efficient scheduling algorithm
2. Fair distribution of requests
3. Handle peak hours

## Expected Deliverables
**Classes**: ElevatorController, Elevator, Request, Scheduler, Floor

**Key Operations**: requestElevator() - O(n), moveElevator() - O(1), assignRequest() - O(n)

**Patterns**: State, Strategy, Singleton

## Test Cases
1. Multiple requests from different floors
2. Optimize elevator selection
3. Handle direction changes
