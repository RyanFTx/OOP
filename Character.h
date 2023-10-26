#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>
#include "Cell.h"
class Character:Cell{
    private:
        char type = 'c';
    public:
        Character(int x, int y){
            position = {x,y};
        }
        void move(int dx, int dy){
            position = {dx,dy}; // Character.setPos{dx,dy}
        }
        
};

#endif