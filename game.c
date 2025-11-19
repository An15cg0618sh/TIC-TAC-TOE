#include <stdio.h>
#include <stdbool.h>

typedef struct 
{
    char board[3][3];    
    char currentPlayer;  
} Game;

void initializeGame(Game* game) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            game->board[i][j] = ' '; 
        }
    }
    game->currentPlayer = 'X'; 
}

void displayBoard(Game* game) {
    printf("\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf(" %c ", game->board[i][j]);
            if (j < 2) printf("|");
        }
        printf("\n");
        if (i < 2) printf("---|---|---\n");
    }
    printf("\n");
}

bool isCellAvailable(Game* game, int cell) {
    int row = (cell - 1) / 3;
    int col = (cell - 1) % 3;
    return game->board[row][col] == ' ';
}

void makeMove(Game* game, int cell) 
{
    int row = (cell - 1) / 3;
    int col = (cell - 1) % 3;
    game->board[row][col] = game->currentPlayer;
}

void switchPlayer(Game* game) {
    game->currentPlayer = (game->currentPlayer == 'X') ? 'O' : 'X';
}

bool checkWinner(Game* game) {
    char p = game->currentPlayer;

    // Check rows and columns
    for (int i = 0; i < 3; i++) {
        if ((game->board[i][0] == game->board[i][1] && game->board[i][1] == game->board[i][2] && game->board[i][0] != ' ') ||
            (game->board[0][i] == game->board[1][i] && game->board[1][i] == game->board[2][i] && game->board[0][i] != ' ')) {
            return true;
        }
    }

    // Check diagonals
    if ((game->board[0][0] == game->board[1][1] && game->board[1][1] == game->board[2][2] && game->board[0][0] != ' ') ||
        (game->board[0][2] == game->board[1][1] && game->board[1][1] == game->board[2][0] && game->board[0][2] != ' ')) {
        return true;
    }

    return false;
}

// NEW FUNCTION ➜ Check if board is full (for Draw condition)
bool isBoardFull(Game* game) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (game->board[i][j] == ' ')
                return false;
        }
    }
    return true;
}

int main() {
    Game game; 
    initializeGame(&game);

    printf("Welcome to Tic Tac Toe!\n");
    printf("Player 1: X\nPlayer 2: O\n");

    char start;
    printf("Press 's' to start the game: ");
    scanf(" %c", &start);

    if (start != 's' && start != 'S') {
        printf("Invalid input! Exiting the game.\n");
        return 0;
    }

    int cell;
    while (true) {
        displayBoard(&game);
        printf("Player %c, enter the cell number (1-9): ", game.currentPlayer);
        scanf("%d", &cell);

        if (cell < 1 || cell > 9 || !isCellAvailable(&game, cell)) {
            printf("Invalid move! Try again.\n");
            continue;
        }

        makeMove(&game, cell);

        if (checkWinner(&game)) {
            displayBoard(&game);
            printf("Player %c wins!\n", game.currentPlayer);
            break;
        }

        // 👉 NEW: Check for draw
        if (isBoardFull(&game)) {
            displayBoard(&game);
            printf("Game Draw! No more moves left.\n");
            break;
        }

        switchPlayer(&game); 
    }

    return 0;
}
