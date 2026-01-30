# Problem 04: Hotel Booking System

## Difficulty: Medium

## Problem Statement

Design a **Hotel Booking System** that manages room bookings, different room types, pricing, and guest management. The system should handle reservations, cancellations, and room availability.

## Requirements

### Functional Requirements

1. **Room Management**
   - Different room types: Single, Double, Suite, Deluxe
   - Track room availability
   - Room pricing varies by type

2. **Booking Operations**
   - Search available rooms by date range
   - Book a room for specific dates
   - Cancel existing bookings
   - Modify booking dates

3. **Guest Management**
   - Register guest information
   - Track booking history
   - Loyalty program support

4. **Pricing**
   - Base price per room type
   - Seasonal pricing (peak/off-peak)
   - Discounts for loyalty members

### Non-Functional Requirements

1. Handle concurrent bookings
2. Prevent double bookings
3. Efficient room search
4. Scalable for multiple hotels

## Expected Classes/Entities

- **Hotel**: Manages rooms and bookings
- **Room**: Base class for room types
- **Booking**: Represents a reservation
- **Guest**: Customer information
- **Payment**: Handle payment processing

## Design Patterns to Consider

- **Factory Pattern**: Create different room types
- **Observer Pattern**: Notify on booking status changes
- **Strategy Pattern**: Different pricing strategies
- **State Pattern**: Booking states (Confirmed, Cancelled, Completed)

## Input/Output Examples

### Example 1: Search and Book

**Input:**
```cpp
Hotel hotel("Grand Plaza", 50);
hotel.addRoom(new SingleRoom("101", 1000));
hotel.addRoom(new DoubleRoom("102", 1500));

Guest guest("John Doe", "john@email.com", "1234567890");
vector<Room*> available = hotel.searchRooms("2026-02-01", "2026-02-03", "Single");
Booking* booking = hotel.bookRoom(guest, available[0], "2026-02-01", "2026-02-03");
```

**Output:**
```
Available Rooms: 
- Room 101 (Single) - ₹1000/night

Booking Confirmed!
Booking ID: BK001
Guest: John Doe
Room: 101
Check-in: 2026-02-01
Check-out: 2026-02-03
Total: ₹2000 (2 nights * ₹1000)
```

### Example 2: Cancel Booking

**Input:**
```cpp
hotel.cancelBooking("BK001");
```

**Output:**
```
Booking BK001 cancelled successfully
Refund amount: ₹2000
Room 101 is now available
```

## Test Cases

### Test Case 1: Basic Booking Flow
**Input:**
```
1. Add 5 rooms (2 Single, 2 Double, 1 Suite)
2. Search for Single room from 2026-02-01 to 2026-02-03
3. Book the first available room
4. Check availability again
```

**Expected Output:**
```
Search Result: 2 Single rooms available
Booking Successful: Room 101
Total Cost: ₹2000
Search Result After Booking: 1 Single room available
```

### Test Case 2: Double Booking Prevention
**Input:**
```
1. Book Room 101 from 2026-02-01 to 2026-02-03
2. Try to book Room 101 from 2026-02-02 to 2026-02-04 (overlaps)
```

**Expected Output:**
```
First Booking: Success
Second Booking: Failed - Room not available for selected dates
```

### Test Case 3: Multiple Concurrent Bookings
**Input:**
```
1. 3 guests try to book the last available room simultaneously
```

**Expected Output:**
```
Guest 1: Booking Confirmed
Guest 2: Room not available
Guest 3: Room not available
```

### Test Case 4: Pricing Calculation
**Input:**
```
1. Book Suite for 3 nights at ₹5000/night
2. Apply 10% loyalty discount
```

**Expected Output:**
```
Base Price: ₹15000 (3 * ₹5000)
Loyalty Discount: -₹1500 (10%)
Total: ₹13500
```

### Test Case 5: Booking Modification
**Input:**
```
1. Book Room 101 from 2026-02-01 to 2026-02-03
2. Extend booking to 2026-02-05
3. Check new total
```

**Expected Output:**
```
Original Booking: 2 nights, ₹2000
Extended Booking: 4 nights, ₹4000
Additional charge: ₹2000
```

## Design Considerations

1. How to handle date range overlaps?
2. How to implement room locking during booking process?
3. How to calculate cancellation charges?
4. How to handle seasonal pricing?
5. How to support multi-hotel chains?

## Bonus Challenges

- [ ] Implement waitlist for fully booked periods
- [ ] Add amenities (breakfast, spa, parking)
- [ ] Group booking discounts
- [ ] Dynamic pricing based on demand
- [ ] Integration with payment gateway
- [ ] Email notifications for booking confirmation

## Evaluation Criteria

- [ ] Thread-safe booking operations
- [ ] Proper date validation
- [ ] Clean state management for bookings
- [ ] Extensible pricing strategy
- [ ] Efficient room search algorithm

---

**Good Luck!** 🏨
