#pragma once

#include <iostream>
#include <string>

const int SIZE = 3; 

class Board {
    public:
        void print_board();

    private: 
        int **board; 

};