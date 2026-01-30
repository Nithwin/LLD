# Traffic Light Controller

**Category**: System Components | **Difficulty**: Medium

## Problem Statement
Design a traffic light control system for an intersection with multiple roads, handling different traffic patterns and emergency vehicle priority.

## Requirements
### Functional Requirements
1. Control lights for 4-way intersection
2. Implement timed signal changes
3. Handle pedestrian crossing requests
4. Priority for emergency vehicles
5. Adaptive timing based on traffic density

### Non-Functional Requirements
1. Safe state transitions
2. Prevent conflicting green signals
3. Real-time responsiveness

## Expected Deliverables
**Classes**: TrafficController, TrafficLight, Road, Timer, State (Red/Yellow/Green)

**Key Operations**: changeSignal() - O(1), handleEmergency() - O(1), adjustTiming() - O(1)

**Patterns**: State, Observer, Strategy

## Test Cases
1. Normal signal cycle
2. Emergency vehicle override
3. Pedestrian crossing request
