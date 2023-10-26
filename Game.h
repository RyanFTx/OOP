#ifndef GAME_H
#define GAME_H

#include <iostream>
#include "Cell.h"

class Game{
    private:
        std::vector<Cell*> grid;
    public:
        std::vector<Cell*>& getGrid(){
            return grid;
        }
        initGame(int numCharacters, int numTraps, int gridWidth, int gridHeight){

        }
        gameLoop(int maxIterations, double trapActivationDistance){
            //while loop to run game < maxIterations
            //call move(1,0) for all classes
            //Have an if statement which compares charaters pos with the border coordinate of grid then std::cout win and break loop
        }
}