# Movie Booking System

**Category**: System Components | **Difficulty**: Hard

## Problem Statement
Design a movie ticket booking system supporting multiple theaters, shows, seat selection, and payment processing.

## Requirements
### Functional Requirements
1. Browse movies and showtimes
2. Select seats from available options
3. Book tickets with payment
4. Cancel bookings with refund
5. Handle concurrent seat selection

### Non-Functional Requirements
1. Prevent double booking
2. Lock seats during selection
3. Handle payment failures

## Expected Deliverables
**Classes**: Theater, Movie, Show, Seat, Booking, Payment, SeatLock

**Key Operations**: searchShows() - O(n), selectSeats() - O(1), bookTickets() - O(1), cancelBooking() - O(1)

**Patterns**: Singleton, Factory, Strategy, Observer

## Test Cases
1. Successful booking flow
2. Concurrent seat selection conflict
3. Booking cancellation
