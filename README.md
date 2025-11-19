# ❌⭕ Tic-Tac-Toe Game

> Classic Tic-Tac-Toe game built in C using Data Structures - Simple, clean, and fun!

![C](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)
![Data Structures](https://img.shields.io/badge/Data_Structures-Struct_&_Arrays-orange?style=for-the-badge)
![Game](https://img.shields.io/badge/Game-Tic--Tac--Toe-red?style=for-the-badge)
![License](https://img.shields.io/badge/License-MIT-yellow?style=for-the-badge)

## 🎮 About The Game

A console-based implementation of the timeless Tic-Tac-Toe game written in pure C, demonstrating **practical Data Structures** implementation. Challenge your friend to a battle of Xs and Os! This project showcases clean code structure, struct-based design, 2D array manipulation, and fundamental C programming concepts with real-world data structure applications.

## ✨ Features

- 🎯 **Two Player Mode** - Play against your friend
- 🗂️ **Data Structure Implementation** - Uses struct and 2D array
- 🎨 **Clean UI** - Simple and intuitive board display
- ✅ **Input Validation** - Prevents invalid moves
- 🏆 **Win Detection** - Automatic winner identification (rows, columns, diagonals)
- 🤝 **Draw Detection** - Recognizes when the board is full with no winner
- 🔄 **Turn Management** - Smooth player switching with pointer-based state management
- 📊 **Struct-Based Design** - Organized game state encapsulation

## 🎬 Game Preview

### Starting the Game
<p align="center">
  <img width="472" height="297" alt="image" src="https://github.com/user-attachments/assets/6c53ecde-3ea5-437a-bf7e-aacc2ecce381" />

</p>

### Gameplay in Progress
<p align="center">
  <img width="507" height="901" alt="image" src="https://github.com/user-attachments/assets/59683871-078b-45d8-9241-040b744445c7" />
</p>

### Player Wins!
<p align="center">
  <img width="454" height="916" alt="image" src="https://github.com/user-attachments/assets/4ba9a0a2-1af3-4af4-81b5-f40f33427ea9" />
</p>

### Draw Game
<p align="center">
 <img width="432" height="764" alt="image" src="https://github.com/user-attachments/assets/5c490be6-5887-42fe-a689-28ed5995c8e6" />
 <img width="438" height="893" alt="image" src="https://github.com/user-attachments/assets/875ccd1b-e947-4d1d-9e25-688a6c69137b" />
 <img width="406" height="742" alt="image" src="https://github.com/user-attachments/assets/19205b1f-9554-4250-b45e-9e2bba17dc9a" />
</p>

## 🚀 Getting Started

### Prerequisites

You need a C compiler installed on your system:
- **GCC** (Linux/Mac)
- **MinGW** (Windows)
- **Clang** (Mac/Linux)
- Any IDE with C compiler (Code::Blocks, Dev-C++, Visual Studio)

### Installation & Running

1. **Clone the repository**
   ```bash
   git clone https://github.com/yourusername/tic-tac-toe.git
   cd tic-tac-toe
   ```

2. **Compile the game**
   ```bash
   gcc tictactoe.c -o tictactoe
   ```

3. **Run the game**
   ```bash
   ./tictactoe        # Linux/Mac
   tictactoe.exe      # Windows
   ```

## 🎮 How to Play

1. **Start the game** by pressing `s` when prompted
2. **Players take turns** - Player 1 (X) goes first, then Player 2 (O)
3. **Enter a number** (1-9) corresponding to the board position:

```
 1 | 2 | 3 
---|---|---
 4 | 5 | 6 
---|---|---
 7 | 8 | 9 
```

4. **Win the game** by getting three in a row:
   - Horizontally: 1-2-3, 4-5-6, or 7-8-9
   - Vertically: 1-4-7, 2-5-8, or 3-6-9
   - Diagonally: 1-5-9 or 3-5-7

5. **Game ends** when someone wins or the board is full (draw)

## 📁 Project Structure

```
tic-tac-toe/
│
├── game.c          # Main game source code

```

## 🛠️ Technical Details

### Data Structures Used

This project demonstrates practical application of **Data Structures in C**:

#### 1. **Struct (User-Defined Data Type)**
```c
typedef struct {
    char board[3][3];      // 3x3 game board
    char currentPlayer;    // Current player ('X' or 'O')
} Game;
```
- **Purpose**: Encapsulates related game data into a single unit
- **Benefits**: Organized code, easy state management, modular design

#### 2. **2D Array (Matrix)**
- `char board[3][3]` - Represents the 3x3 game grid
- **Memory Layout**: Contiguous 9-byte array storing game state
- **Access Pattern**: `board[row][col]` for O(1) lookup time

#### 3. **Pointers**
- All functions use `Game* game` to pass struct by reference
- **Advantage**: Efficient memory usage, no copying overhead

### Memory Organization
```
Game struct memory layout:
├── board[3][3]     → 9 bytes (3x3 char array)
└── currentPlayer   → 1 byte (char)
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
Total: ~10 bytes per game instance
```

### Key Functions

| Function | Purpose |
|----------|---------|
| `initializeGame()` | Sets up the board and starting player |
| `displayBoard()` | Renders the current game state |
| `isCellAvailable()` | Checks if a move is valid |
| `makeMove()` | Places player's mark on the board |
| `switchPlayer()` | Alternates between X and O |
| `checkWinner()` | Detects winning conditions |
| `isBoardFull()` | Checks for draw condition |

## 🎯 Learning Objectives

This project demonstrates:

- ✅ **Structs** - Organizing related data
- ✅ **Functions** - Modular code design
- ✅ **2D Arrays** - Grid representation
- ✅ **Pointers** - Passing structs by reference
- ✅ **Boolean Logic** - Game state management
- ✅ **User Input** - scanf and validation
- ✅ **Control Flow** - Loops and conditionals


## 🎓 Concepts Covered

Perfect for learning:
- **Data Structures**: Struct, 2D Arrays, Pointers
- **C Programming Fundamentals**: Functions, Control Flow, Type Definitions
- **Algorithm Design**: Win detection, Board traversal
- **Game Logic Implementation**: State management, Turn-based system
- **Input Validation**: Error handling and bounds checking
- **Modular Programming**: Function decomposition and separation of concerns

## 💡 Why This Project?

This Tic-Tac-Toe implementation showcases:
- **Data Structures** - Real-world application of structs, arrays, and pointers
- **Clean Code** - Well-organized and readable structure
- **Beginner-Friendly** - Easy to understand logic for DS learners
- **Practical Learning** - Hands-on experience with C programming and data organization
- **Expandable** - Great foundation for adding advanced DS features (stacks, trees, etc.)
- **Classic Game** - Everyone knows how to play, focus on implementation!

## 🙏 Acknowledgments

- Inspired by the classic pen-and-paper game
- Built as a learning project to master C programming
- Perfect for understanding game logic and data structures

---

<div align="center">

**Made with ❤️ and C**

⭐ Star this repo if you enjoyed it!


</div>
