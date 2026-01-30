# Problem 08: Chess Game

## Difficulty: Hard

## Problem Statement

Design a **Chess Game** that implements all chess rules, move validation, check/checkmate detection, and game state management.

## Requirements

### Functional Requirements

1. **Board Setup**: 8x8 board with proper piece placement
2. **Pieces**: King, Queen, Rook, Bishop, Knight, Pawn with unique movements
3. **Move Validation**: Legal moves for each piece
4. **Special Moves**: Castling, en passant, pawn promotion
5. **Check/Checkmate**: Detect and prevent illegal moves
6. **Turn Management**: Alternate between players
7. **Game States**: InProgress, Checkmate, Stalemate, Draw

## Design Patterns

- **Strategy Pattern**: Piece movement strategies
- **Command Pattern**: Move execution and undo
- **State Pattern**: Game states
- **Factory Pattern**: Piece creation

## Test Cases with Input/Output

### Test Case 1: Initial Board Setup
**Input:**
```cpp
ChessGame* game = new ChessGame();
game->startGame("Player1", "Player2");
game->displayBoard();
```

**Expected Output:**
```
Chess Game Started
Player1 (WHITE) vs Player2 (BLACK)

  a b c d e f g h
8 ♜ ♞ ♝ ♛ ♚ ♝ ♞ ♜ 8
7 ♟ ♟ ♟ ♟ ♟ ♟ ♟ ♟ 7
6 . . . . . . . . 6
5 . . . . . . . . 5
4 . . . . . . . . 4
3 . . . . . . . . 3
2 ♙ ♙ ♙ ♙ ♙ ♙ ♙ ♙ 2
1 ♖ ♘ ♗ ♕ ♔ ♗ ♘ ♖ 1
  a b c d e f g h

Turn: WHITE
```

### Test Case 2: Valid Pawn Move
**Input:**
```cpp
game->makeMove("e2", "e4");
```

**Expected Output:**
```
WHITE moves Pawn from e2 to e4
Move successful!

  a b c d e f g h
8 ♜ ♞ ♝ ♛ ♚ ♝ ♞ ♜ 8
7 ♟ ♟ ♟ ♟ ♟ ♟ ♟ ♟ 7
6 . . . . . . . . 6
5 . . . . . . . . 5
4 . . . . ♙ . . . 4
3 . . . . . . . . 3
2 ♙ ♙ ♙ ♙ . ♙ ♙ ♙ 2
1 ♖ ♘ ♗ ♕ ♔ ♗ ♘ ♖ 1
  a b c d e f g h

Turn: BLACK
```

### Test Case 3: Invalid Move
**Input:**
```cpp
game->makeMove("e7", "e4"); // Pawn can't move 3 squares
```

**Expected Output:**
```
ERROR: Illegal move!
Pawn at e7 cannot move to e4
Reason: Pawns can only move 1 or 2 squares forward from starting position
Turn: BLACK (retry)
```

### Test Case 4: Capture Move
**Input:**
```cpp
game->makeMove("e7", "e5"); // Black pawn
game->makeMove("d2", "d4"); // White pawn
game->makeMove("e5", "d4"); // Black captures white
```

**Expected Output:**
```
BLACK moves Pawn from e7 to e5
WHITE moves Pawn from d2 to d4
BLACK captures WHITE Pawn at d4
Move successful!
Captured: ♙ Pawn

Turn: WHITE
```

### Test Case 5: Check Detection
**Input:**
```cpp
// After several moves, queen gives check
game->makeMove("d8", "h4"); // Black queen checks white king
```

**Expected Output:**
```
BLACK moves Queen from d8 to h4
CHECK! WHITE King is in check
WHITE must:
  1. Move King to safety, or
  2. Block the attack, or
  3. Capture the attacking piece

Turn: WHITE (must respond to check)
```

### Test Case 6: Checkmate
**Input:**
```cpp
// Fool's mate scenario
game->makeMove("f2", "f3");
game->makeMove("e7", "e5");
game->makeMove("g2", "g4");
game->makeMove("d8", "h4"); // Checkmate!
```

**Expected Output:**
```
WHITE moves Pawn f2 to f3
BLACK moves Pawn e7 to e5
WHITE moves Pawn g2 to g4
BLACK moves Queen d8 to h4
CHECKMATE! BLACK wins!

Game Over
Winner: Player2 (BLACK)
Total Moves: 4
Time: 00:03:24
```

### Test Case 7: Castling
**Input:**
```cpp
// After clearing pieces between king and rook
game->makeMove("e1", "g1"); // Kingside castling
```

**Expected Output:**
```
WHITE performs Kingside Castling
King: e1 → g1
Rook: h1 → f1
Move successful!

  a b c d e f g h
8 ♜ ♞ ♝ ♛ ♚ ♝ ♞ ♜ 8
7 ♟ ♟ ♟ ♟ ♟ ♟ ♟ ♟ 7
6 . . . . . . . . 6
5 . . . . . . . . 5
4 . . . . . . . . 4
3 . . . . . . . . 3
2 ♙ ♙ ♙ ♙ ♙ ♙ ♙ ♙ 2
1 ♖ ♘ ♗ ♕ . ♖ ♔ . 1
  a b c d e f g h
```

### Test Case 8: Pawn Promotion
**Input:**
```cpp
// Pawn reaches opposite end
game->makeMove("a7", "a8", "QUEEN"); // Promote to queen
```

**Expected Output:**
```
BLACK Pawn reaches rank 8!
Pawn promoted to QUEEN
New Queen placed at a8

♟ → ♛

Turn: WHITE
```

## Bonus Challenges

- [ ] Move history with notation
- [ ] Undo/Redo moves
- [ ] Timer for each player
- [ ] Save/Load game
- [ ] AI opponent
- [ ] Move suggestions
- [ ] 3-fold repetition draw
- [ ] 50-move rule

## Evaluation Criteria

- [ ] All chess rules implemented correctly
- [ ] Proper move validation
- [ ] Check/checkmate detection
- [ ] Special moves working
- [ ] Clean architecture
- [ ] Extensible design

---

**Good Luck!** ♟️
