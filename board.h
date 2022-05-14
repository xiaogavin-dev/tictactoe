#pragma once

#include <iostream>
#include <string>

const int SIZE = 3; 

struct Player {
    std::string player_name;
    char player_symbol; 
};

class Board {
    public:
        Board();
        void print_board() const;

    private: 
        char **board; 
        Player player_one;
        Player player_two;
};