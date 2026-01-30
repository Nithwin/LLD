# Chain of Responsibility for Support Tickets

**Category**: Design Patterns  
**Difficulty**: Medium

## Problem Statement

Design a customer support ticket system where tickets are automatically routed through different support levels (L1, L2, L3, Manager) based on priority and complexity. Each level can handle the ticket or escalate to the next level.

## Requirements

### Functional Requirements
1. Route tickets through support hierarchy
2. Each level handles tickets within their capability
3. Escalate complex tickets to higher levels
4. Track ticket resolution path
5. Support different ticket types (Technical, Billing, General)

### Non-Functional Requirements
1. Easy to add new support levels
2. Flexible routing logic
3. Audit trail for escalations

## Constraints

- Each support level has maximum complexity they can handle
- Tickets must be resolved or escalated, not dropped
- Response time SLA varies by level
- Maximum escalation depth to prevent infinite loops

## Expected Deliverables

### Class Design
- **SupportHandler**: Abstract handler class
- **L1Support, L2Support, L3Support, ManagerSupport**: Concrete handlers
- **Ticket**: Request object with priority and type
- **TicketType, Priority**: Enums

### Key Operations
- `handleTicket(ticket)`: Process or escalate - O(1) per level
- `setNextHandler(handler)`: Set chain link - O(1)
- `canHandle(ticket)`: Check capability - O(1)

### Design Patterns
- Chain of Responsibility Pattern
- Template Method Pattern (for common handling logic)

## Example Usage

```
SupportHandler l1 = new L1Support();
SupportHandler l2 = new L2Support();
SupportHandler l3 = new L3Support();
SupportHandler manager = new ManagerSupport();

l1.setNextHandler(l2);
l2.setNextHandler(l3);
l3.setNextHandler(manager);

Ticket ticket = new Ticket("Database crash", Priority.HIGH, TicketType.TECHNICAL);
l1.handleTicket(ticket);
```

## Test Cases

### Test Case 1
**Input**: Low priority general ticket  
**Expected Output**: Handled by L1 support

### Test Case 2
**Input**: High priority technical ticket  
**Expected Output**: Escalated to L3 or Manager

### Test Case 3
**Input**: Ticket that no level can handle  
**Expected Output**: Reaches end of chain with appropriate action

## Evaluation Criteria

- Correct Chain of Responsibility implementation
- Proper escalation logic
- Flexible chain configuration
- Audit trail implementation
- Error handling

## Additional Notes

Consider how to handle tickets that need multiple levels to collaborate. Think about SLA tracking and notifications.
