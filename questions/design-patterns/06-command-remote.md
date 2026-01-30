# Command Pattern for Remote Control

**Category**: Design Patterns  
**Difficulty**: Medium

## Problem Statement

Design a universal remote control system that can control various devices (TV, AC, Lights, Music System). Implement undo/redo functionality for commands and support macro commands that execute multiple operations.

## Requirements

### Functional Requirements
1. Control multiple devices with different operations
2. Support undo and redo for all commands
3. Create macro commands (sequences of commands)
4. Store command history
5. Support programmable buttons

### Non-Functional Requirements
1. Easy to add new devices and commands
2. Commands should be serializable for persistence
3. Efficient command execution

## Constraints

- Each button can be programmed with any command
- Undo stack should have a maximum size
- Macro commands can contain other macro commands
- All commands must be reversible

## Expected Deliverables

### Class Design
- **Command**: Interface for all commands
- **ConcreteCommand**: Specific command implementations
- **RemoteControl**: Invoker class
- **Device**: Receiver interface
- **TV, AC, Light, MusicSystem**: Concrete receivers

### Key Operations
- `execute()`: Execute command - O(1)
- `undo()`: Reverse last command - O(1)
- `redo()`: Re-execute undone command - O(1)
- `setCommand(slot, command)`: Program button - O(1)

### Design Patterns
- Command Pattern
- Memento Pattern (for undo/redo)
- Composite Pattern (for macro commands)

## Example Usage

```
RemoteControl remote = new RemoteControl();
TV tv = new TV();
Light light = new Light();

Command tvOn = new TVOnCommand(tv);
Command lightOff = new LightOffCommand(light);

remote.setCommand(0, tvOn);
remote.setCommand(1, lightOff);

remote.pressButton(0); // TV turns on
remote.undo(); // TV turns off
```

## Test Cases

### Test Case 1
**Input**: Execute command then undo  
**Expected Output**: Device returns to previous state

### Test Case 2
**Input**: Create macro command with 3 operations  
**Expected Output**: All operations execute in sequence

### Test Case 3
**Input**: Undo then redo  
**Expected Output**: Command re-executed correctly

## Evaluation Criteria

- Proper Command pattern implementation
- Working undo/redo mechanism
- Macro command functionality
- Clean separation of concerns
- Extensibility for new devices

## Sample Tests

### Sample Test 1: Command Execution and Undo
```java
// Input
RemoteControl remote = new RemoteControl();
TV tv = new TV();
Light light = new Light();

Command tvOn = new TVOnCommand(tv);
Command lightOn = new LightOnCommand(light);

remote.setCommand(0, tvOn);
remote.setCommand(1, lightOn);

remote.pressButton(0);  // TV on
remote.pressButton(1);  // Light on
remote.undo();          // Light off

// Output
TV is now ON
Light is now ON
Undoing last command...
Light is now OFF
```

### Sample Test 2: Macro Command
```java
// Input
Command[] partyMode = {new LightOnCommand(light), new TVOnCommand(tv), new MusicOnCommand(music)};
MacroCommand partyMacro = new MacroCommand(partyMode);

remote.setCommand(5, partyMacro);
remote.pressButton(5);
remote.undo();

// Output
Executing macro command...
Light is now ON
TV is now ON
Music System is now ON
Undoing macro command...
Music System is now OFF
TV is now OFF
Light is now OFF
```

## Additional Notes

Consider how to handle commands that cannot be undone. Think about persisting command history across sessions.
