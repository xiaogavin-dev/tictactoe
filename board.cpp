#include "board.h"

Board::Board() {
    this->board = new char*[SIZE];
    for(int i = 0; i < SIZE; i++) { 
        this->board[i] = new char[SIZE];
    }

    for(int i = 0; i < SIZE; i++) { 
        for(int j = 0; j < SIZE; j++) { 
            board[i][j] = ' ';
        }
    }
    
    player_one.player_symbol = 'X';
    player_two.player_symbol = 'O';
}

void Board::print_board() const {
    std::cout << "\x1B[2J";

    /* ----------
     * |  |  |  |
     * ----------
     * |  |  |  |  
     * ----------
     * |  |  |  |
     * ---------- 
    */

    for(int i = 0; i < 3; i++) {
        std::cout << "----------\n|";

        for(int j = 0; j < 3; j++) {
            if(board[i][j] == 'X') {
               std::cout << "X |";
            } else if(board[i][j] == 'O') {
               std::cout << "O |";
            } else {
               std::cout << "  |";
            }
        }
        
        std::cout << "\n";
    }

    std::cout << "----------\n";
}

