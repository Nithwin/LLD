# Problem 05: Elevator System

## Difficulty: Hard

## Problem Statement

Design an **Elevator Control System** for a multi-floor building. The system should efficiently handle elevator requests, optimize movement, and manage multiple elevators.

## Requirements

### Functional Requirements

1. **Request Handling**
   - Internal requests (inside elevator)
   - External requests (floor buttons)
   - Emergency requests (priority)

2. **Elevator Operations**
   - Move up/down
   - Open/close doors
   - Stop at requested floors
   - Display current floor

3. **Algorithm**
   - Efficient floor selection
   - Direction-based optimization
   - Load balancing across elevators

4. **Constraints**
   - Maximum weight capacity
   - Maximum floor limit
   - Door open/close timing

### Non-Functional Requirements

1. Minimize wait time
2. Energy efficient movement
3. Handle concurrent requests
4. Safety mechanisms

## Design Patterns to Consider

- **State Pattern**: Elevator states (Idle, Moving Up, Moving Down, Door Open)
- **Strategy Pattern**: Different scheduling algorithms (FCFS, SCAN, LOOK)
- **Singleton Pattern**: Elevator controller
- **Command Pattern**: Request handling

## Input/Output Examples

### Example 1: Single Request

**Input:**
```cpp
Building building(10); // 10 floors
Elevator elevator(1, building);

// Person on floor 0 presses UP
elevator.addExternalRequest(0, Direction::UP);
// Person inside selects floor 5
elevator.addInternalRequest(5);
```

**Output:**
```
Elevator 1 at Floor 0
Door Opening...
Door Open
Passenger entered, selected Floor 5
Door Closing...
Moving UP
Stopped at Floor 5
Door Opening...
Passenger exited
Door Closing...
Elevator Idle at Floor 5
```

### Example 2: Multiple Requests

**Input:**
```cpp
elevator.addExternalRequest(0, Direction::UP);    // Person at 0 going up
elevator.addExternalRequest(3, Direction::UP);    // Person at 3 going up
elevator.addInternalRequest(5);                   // First person going to 5
elevator.addInternalRequest(7);                   // Second person going to 7
```

**Output:**
```
Elevator starts at Floor 0
Picks up passenger at Floor 0 (going to 5)
Picks up passenger at Floor 3 (going to 7)
Stops at Floor 5 (drops passenger)
Stops at Floor 7 (drops passenger)
Elevator Idle at Floor 7
```

## Test Cases

### Test Case 1: Basic Operation
**Input:**
```
Elevator at floor 0
Request from floor 5 going DOWN
```

**Expected Output:**
```
Elevator moves from 0 → 5
Door opens at floor 5
Passenger enters
Internal request to floor 2
Elevator moves 5 → 2
Passenger exits at floor 2
```

### Test Case 2: Optimization (SCAN Algorithm)
**Input:**
```
Elevator at floor 5, moving UP
Requests: Floor 3(DOWN), Floor 7(UP), Floor 2(UP)
```

**Expected Output:**
```
Current: Floor 5, Direction: UP
Serves floor 7 first (same direction)
Then goes down to serve 3, then 2
```

### Test Case 3: Multiple Elevators
**Input:**
```
3 Elevators at floors: 0, 5, 9
Request from floor 7 going DOWN
```

**Expected Output:**
```
Elevator 2 (at floor 5) assigned - closest
Elevator 2 moves to floor 7
```

### Test Case 4: Weight Limit
**Input:**
```
Max capacity: 800 kg
Current weight: 750 kg
New passenger: 80 kg
```

**Expected Output:**
```
ERROR: Weight limit exceeded
Door remains open
Warning displayed
```

### Test Case 5: Emergency Request
**Input:**
```
Elevator serving floors 2, 5, 8
Emergency request from floor 4
```

**Expected Output:**
```
Current requests paused
Elevator immediately goes to floor 4
After emergency, resumes: 5, 8
```

## Design Considerations

1. How to handle concurrent requests from multiple floors?
2. How to optimize elevator assignment for multiple elevators?
3. How to handle emergency situations?
4. How to implement door safety (prevent closing on passengers)?
5. How to handle power failures?

## Bonus Challenges

- [ ] Express elevators (skip certain floors)
- [ ] Peak hour optimization
- [ ] Energy-saving mode
- [ ] Destination dispatch system
- [ ] Predictive maintenance alerts
- [ ] Handicap-accessible features

## Evaluation Criteria

- [ ] Efficient scheduling algorithm
- [ ] Proper state management
- [ ] Thread-safe operations
- [ ] Clean separation of concerns
- [ ] Realistic simulation

---

**Good Luck!** 🛗
