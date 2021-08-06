#include<iostream>
#include <fstream>
#include "Rock.h"
int main(){
    std::string input, change;
    int entry, choose;
    Rock game;
    game.Reader();
    game.Writer(input, change);
    while ((game.first + game.second) <= game.won) 
        game.DoIt(entry, choose);
    switch (game.CurrSh) {
        case 1:
            std::cout << "\nPlayer1 won!! \n";
            break;
        case 2:
            std::cout << "\nPlayer2 won!! \n";
            break;
    }
}